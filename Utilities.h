#ifndef UTILITIES_H
#define UTILITIES_H

bool runChecks(int argCount, char* script);
bool runSyntaxCheck(char* script);
void parseLine(char* line);
void parseFile(char* fileName);

#endif
