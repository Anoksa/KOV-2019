#include "pch.h"
#include "Error.h"
#include "In.h"
#include "Log.h"
#include "Parm.h"
#include "LexAnalize.h"
#include "PolishNotation.h"
#include "IT.h"
#include "LT.h"
#include "MFST.h"
#include "SemAnalize.h"
#include "Generation.h"

Log::LOG logfile;

int _tmain(int argc, wchar_t* argv[])
{
	setlocale(LC_ALL, "rus");
	try
	{
		Parm::PARM parm = Parm::getparm(argc, argv);
		logfile = Log::getlog(parm.log);
		In::IN in = In::getin(parm.in);
		LexAnalysis::Table table = LexAnalysis::LexAnalysis(in, logfile);
		Semantics::Analize(table, logfile);

		Log::WriteLog(logfile);
		Log::WriteParm(logfile, parm);
		Log::WriteIn(logfile, in);
		Log::WriteIDTableLog(table.idtable, logfile);
		Log::WriteLexTableLog(table.lextable, logfile);

		MFST_TRACE_START_LOG(logfile);
		MFST::Mfst mfst(table, GRB::getGreibach());
		mfst.start(logfile);
		mfst.savededucation();
		mfst.printrules(logfile, false);

		bool rc = Polish::GoPolish(table);
		if (rc)
		{
			*logfile.stream << "     | �������� ������ ��������� �������." << std::endl;
			*logfile.stream << std::setfill('-') << std::setw(89) << '-' << std::endl;
		}
		else
		{
			*logfile.stream << "     | �������� ������ �� ���������." << std::endl;
			*logfile.stream << std::setfill('-') << std::setw(89) << '-' << std::endl;
		}

		LT::WriteLexTable(table.lextable);
		logfile = Log::getlog(parm.out);
		CodeGeneration::Generation(table, logfile);

		IT::Delete(table.idtable);
		LT::Delete(table.lextable);

		system("pause");
	}

	catch (Error::ERROR e)
	{
		Log::WriteError(logfile, e);
	}
}
