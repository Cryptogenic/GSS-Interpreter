#ifndef UTILITIES_H
#define UTILITIES_H

#include "Structures.h"

bool runChecks(int argCount, char *arguments[]);
bool runSyntaxCheck(const char* script);
void parseLine(const char* line);
void parseFile(const char* fileName);
void throwError();

#endif
