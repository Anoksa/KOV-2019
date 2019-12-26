#pragma once
#include "pch.h"
#include "LexAnalize.h"
#include "Error.h"

namespace Polish
{
	bool GoPolish(LexAnalysis::Table& lex);
	bool isPolish(int i, LexAnalysis::Table& lex);
}
