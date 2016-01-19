#ifndef UTILITIES_H
#define UTILITIES_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

#include "Structures.h"

bool runChecks(int argCount, char* arguments[], bool isFile);
bool runSyntaxCheck(std::string eval, bool isFile);
void throwError();

#endif
