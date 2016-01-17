#ifndef UTILITIES_H
#define UTILITIES_H

#include "Structures.h"

int errorFlag;
char* errorInformation;

bool runChecks(int argCount, char* script);
bool runSyntaxCheck(char* script);
void parseLine(char* line);
void parseFile(char* fileName);
void throwError();

#endif
