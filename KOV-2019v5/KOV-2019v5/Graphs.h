#pragma once
#include "FST.h"

#define GRAPH_INT 5, \
	FST::NODE(1,FST::RELATION('i',1)),\
	FST::NODE(1,FST::RELATION('n',2)),\
	FST::NODE(1,FST::RELATION('t',3)),\
	FST::NODE(1,FST::RELATION('!',4)),\
	FST::NODE()

#define GRAPH_STR 5, \
	FST::NODE(1,FST::RELATION('s',1)),\
	FST::NODE(1,FST::RELATION('t',2)),\
	FST::NODE(1,FST::RELATION('r',3)),\
	FST::NODE(1,FST::RELATION('!',4)),\
	FST::NODE()

#define GRAPH_GONEWSTR 5,\
	FST::NODE(1, FST::RELATION('L', 1)), \
	FST::NODE(1, FST::RELATION('i', 2)), \
	FST::NODE(1, FST::RELATION('n', 3)), \
	FST::NODE(1, FST::RELATION('e', 4)), \
	FST::NODE()

#define GRAPH_SIGN 2,	\
	FST::NODE(5, FST::RELATION('+', 1), FST::RELATION('-', 1), FST::RELATION('*', 1), FST::RELATION('/', 1), FST::RELATION('%', 1)),\
	FST::NODE()

#define GRAPH_LOG_OPERATOR 2, \
	FST::NODE(6, FST::RELATION('>', 1), FST::RELATION('<', 1), FST::RELATION('`',1), FST::RELATION('~', 1), FST::RELATION('?', 1), FST::RELATION('#', 1)), \
	FST::NODE()


#define GRAPH_POINT 2,	\
	FST::NODE(1, FST::RELATION('.', 1)),\
	FST::NODE()

#define GRAPH_AND 2,	\
	FST::NODE(1, FST::RELATION('&', 1)),\
	FST::NODE()

#define GRAPH_LEFTBRACE 2,	\
	FST::NODE(1, FST::RELATION('{', 1)),\
	FST::NODE()

#define GRAPH_BRACELET 2,	\
	FST::NODE(1, FST::RELATION('}', 1)),\
	FST::NODE()

#define GRAPH_LEFTTHESIS 2,	\
	FST::NODE(1, FST::RELATION('[', 1)),\
	FST::NODE()

#define GRAPH_RIGHTTHESIS 2,	\
	FST::NODE(1, FST::RELATION(']', 1)),\
	FST::NODE()

#define GRAPH_LEFTBRACKET 2,	\
	FST::NODE(1, FST::RELATION('(', 1)),\
	FST::NODE()

#define GRAPH_RIGHTBRACKET 2,	\
	FST::NODE(1, FST::RELATION(')', 1)),\
	FST::NODE()

#define GRAPH_EQUAL 2,	\
	FST::NODE(1, FST::RELATION('=', 1)),\
	FST::NODE()

#define GRAPH_ID 2, \
	FST::NODE(52,	\
	FST::RELATION('a', 0), FST::RELATION('b', 0), FST::RELATION('c', 0), FST::RELATION('d', 0), FST::RELATION('e', 0), FST::RELATION('f', 0),\
	FST::RELATION('g', 0), FST::RELATION('h', 0), FST::RELATION('i', 0), FST::RELATION('j', 0), FST::RELATION('k', 0), FST::RELATION('l', 0),\
	FST::RELATION('m', 0), FST::RELATION('n', 0), FST::RELATION('o', 0), FST::RELATION('p', 0), FST::RELATION('q', 0), FST::RELATION('r', 0),\
	FST::RELATION('s', 0), FST::RELATION('t', 0), FST::RELATION('u', 0), FST::RELATION('v', 0), FST::RELATION('w', 0), FST::RELATION('x', 0),\
	FST::RELATION('y', 0), FST::RELATION('z', 0),\
	\
	FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
	FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
	FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
	FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
	FST::RELATION('y', 1), FST::RELATION('z', 1)),\
	FST::NODE()

#define GRAPH_STRING_LITERAL 3,\
	FST::NODE(1, FST::RELATION('\"', 1)),\
	FST::NODE(89, \
			FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1),\
			FST::RELATION('e', 1), FST::RELATION('f', 1), FST::RELATION('g', 1), FST::RELATION('h', 1),\
			FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
			FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1),\
			FST::RELATION('q', 1), FST::RELATION('r', 1), FST::RELATION('s', 1), FST::RELATION('t', 1),\
			FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
			FST::RELATION('y', 1), FST::RELATION('z', 1),\
			FST::RELATION('A', 1), FST::RELATION('B', 1), FST::RELATION('C', 1), FST::RELATION('D', 1),\
			FST::RELATION('E', 1), FST::RELATION('F', 1), FST::RELATION('G', 1), FST::RELATION('H', 1),\
			FST::RELATION('I', 1), FST::RELATION('J', 1), FST::RELATION('K', 1), FST::RELATION('L', 1),\
			FST::RELATION('M', 1), FST::RELATION('N', 1), FST::RELATION('O', 1), FST::RELATION('P', 1),\
			FST::RELATION('Q', 1), FST::RELATION('R', 1), FST::RELATION('S', 1), FST::RELATION('T', 1),\
			FST::RELATION('U', 1), FST::RELATION('V', 1), FST::RELATION('W', 1), FST::RELATION('X', 1),\
			FST::RELATION('Y', 1), FST::RELATION('Z', 1),\
			FST::RELATION('0', 1), FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1),\
			FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1),\
			FST::RELATION('8', 1), FST::RELATION('9', 1),\
			FST::RELATION(' ', 1), FST::RELATION(',', 1), FST::RELATION('.', 1), FST::RELATION(';', 1),\
			FST::RELATION('-', 1), FST::RELATION('+', 1), FST::RELATION('*', 1), FST::RELATION('/', 1),\
			FST::RELATION('=', 1), FST::RELATION(':', 1), FST::RELATION(')', 1), FST::RELATION('(', 1),\
			FST::RELATION('}', 1), FST::RELATION('{', 1), FST::RELATION(']', 1), FST::RELATION('[', 1),\
			FST::RELATION('!', 1), FST::RELATION('?', 1), FST::RELATION('#', 1), FST::RELATION('&', 1),\
			FST::RELATION('>', 1), FST::RELATION('<', 1), FST::RELATION('<=',1), FST::RELATION('>=',1),\
			FST::RELATION('[', 1), FST::RELATION(']', 1), FST::RELATION('\"', 2)),\
	FST::NODE()

#define GRAPH_INT_LITERAL 3, \
	FST::NODE(11, \
			FST::RELATION('-', 1),\
			FST::RELATION('0',2),FST::RELATION('1',2),\
			FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),\
			FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('8',2),FST::RELATION('9',2)),\
	FST::NODE(9,\
			FST::RELATION('1',2),\
			FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),\
			FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('8',2),FST::RELATION('9',2)),\
	FST::NODE(10,\
			FST::RELATION('0',2),FST::RELATION('1',2),\
			FST::RELATION('2',2),FST::RELATION('3',2),\
			FST::RELATION('4',2),FST::RELATION('5',2),\
			FST::RELATION('6',2),FST::RELATION('7',2),\
			FST::RELATION('8',2),FST::RELATION('9',2))

#define GRAPH_VAR 4, \
	FST::NODE(1,FST::RELATION('v',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('r',3)),\
	FST::NODE()

#define GRAPH_FUNCTION 5, \
	FST::NODE(1, FST::RELATION('f', 1)),\
    FST::NODE(1, FST::RELATION('u', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE()

#define GRAPH_STRLEN 7, \
	FST::NODE(1, FST::RELATION('s', 1)),\
    FST::NODE(1, FST::RELATION('t', 2)),\
    FST::NODE(1, FST::RELATION('r', 3)),\
    FST::NODE(1, FST::RELATION('l', 4)),\
    FST::NODE(1, FST::RELATION('e', 5)),\
    FST::NODE(1, FST::RELATION('n', 6)),\
    FST::NODE()
#define GRAPH_STRCMP 7,\
	FST::NODE(1, FST::RELATION('S', 1)),\
    FST::NODE(1, FST::RELATION('t', 2)),\
    FST::NODE(1, FST::RELATION('r', 3)),\
	FST::NODE(1, FST::RELATION('c', 4)),\
    FST::NODE(1, FST::RELATION('m', 5)),\
    FST::NODE(1, FST::RELATION('p', 6)),\
    FST::NODE()

#define GRAPH_RANDOM 7, \
	FST::NODE(1, FST::RELATION('r', 1)),\
    FST::NODE(1, FST::RELATION('a', 2)),\
    FST::NODE(1, FST::RELATION('n', 3)),\
    FST::NODE(1, FST::RELATION('d', 4)),\
    FST::NODE(1, FST::RELATION('o', 5)),\
    FST::NODE(1, FST::RELATION('m', 6)),\
    FST::NODE()


#define GRAPH_GO 3, \
	FST::NODE(1,FST::RELATION('g',1)),\
	FST::NODE(1,FST::RELATION('o',2)),\
	FST::NODE()

#define GRAPH_CHECK 6, \
	FST::NODE(1,FST::RELATION('c',1)),\
	FST::NODE(1,FST::RELATION('h',2)),\
	FST::NODE(1,FST::RELATION('e',3)),\
	FST::NODE(1,FST::RELATION('c',4)),\
	FST::NODE(1,FST::RELATION('k',5)),\
	FST::NODE()

#define GRAPH_OTHERWISE 10, \
	FST::NODE(1,FST::RELATION('o',1)),\
	FST::NODE(1,FST::RELATION('t',2)),\
	FST::NODE(1,FST::RELATION('h',3)),\
	FST::NODE(1,FST::RELATION('e',4)),\
	FST::NODE(1,FST::RELATION('r',5)),\
	FST::NODE(1,FST::RELATION('w',6)),\
	FST::NODE(1,FST::RELATION('i',7)),\
	FST::NODE(1,FST::RELATION('s',8)),\
	FST::NODE(1,FST::RELATION('e',9)),\
	FST::NODE()

#define GRAPH_OUT 4, \
	FST::NODE(1,FST::RELATION('o',1)),\
	FST::NODE(1,FST::RELATION('u',2)),\
	FST::NODE(1,FST::RELATION('t',3)),\
	FST::NODE()

#define GRAPH_RETURN 7, \
	FST::NODE(1,FST::RELATION('r',1)),\
	FST::NODE(1,FST::RELATION('e',2)),\
	FST::NODE(1,FST::RELATION('t',3)),\
	FST::NODE(1,FST::RELATION('u',4)),\
	FST::NODE(1,FST::RELATION('r',5)),\
	FST::NODE(1,FST::RELATION('n',6)),\
	FST::NODE()

#define GRAPH_TRUE 5, \
	FST::NODE(1,FST::RELATION('t',1)),\
	FST::NODE(1,FST::RELATION('r',2)),\
	FST::NODE(1,FST::RELATION('u',3)),\
	FST::NODE(1,FST::RELATION('e',4)),\
	FST::NODE()

#define GRAPH_FALSE 6, \
	FST::NODE(1,FST::RELATION('f',1)),\
	FST::NODE(1,FST::RELATION('a',2)),\
	FST::NODE(1,FST::RELATION('l',3)),\
	FST::NODE(1,FST::RELATION('s',4)),\
	FST::NODE(1,FST::RELATION('e',5)),\
	FST::NODE()

#define GRAPH_BOOL 6, \
	FST::NODE(1,FST::RELATION('b',1)),\
	FST::NODE(1,FST::RELATION('o',2)),\
	FST::NODE(1,FST::RELATION('o',3)),\
	FST::NODE(1,FST::RELATION('l',4)),\
	FST::NODE(1,FST::RELATION('!',5)),\
	FST::NODE()

#define GRAPH_INT16 4,\
	 FST::NODE(1, FST::RELATION('0', 1)), \
	 FST::NODE(1, FST::RELATION('x', 2)), \
	 FST::NODE(31, FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2), FST::RELATION('8', 2), FST::RELATION('9', 2), \
		FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2), \
		FST::RELATION('0', 3), FST::RELATION('1', 3), FST::RELATION('2', 3), FST::RELATION('3', 3), FST::RELATION('4', 3), FST::RELATION('5', 3), FST::RELATION('6', 3), FST::RELATION('7', 3), FST::RELATION('8', 3), FST::RELATION('9', 3), \
		FST::RELATION('a', 3), FST::RELATION('b', 3), FST::RELATION('c', 3), FST::RELATION('d', 3), FST::RELATION('e', 3), FST::RELATION('f', 3)), \
	FST::NODE()