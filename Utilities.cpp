#include <stdio.h>
#include "Utilities.h"

int errorFlag;
char* errorInformation;

/*
   Function: runChecks
   Runs argument check and calls runSyntaxCheck to check syntax for correct-ness

   Parameters:
      argCount  - Number of arguments passed to program, "argc" in main.cpp
      arguments - Contains code to check and other arguments, "argv" in main.cpp

   Returns:
      True if syntax is correct and argCount is lower than 2, false otherwise

   See Also:
      runSyntaxCheck(char* script);
*/
bool runChecks(int argCount, char *arguments[])
{
  if(argCount > 2 || argCount == 1)
  {
    errorFlag = ERR_INVALID_ARGS;
    return false;
  }
  /* Run syntax check in next implement */
  return true;
}

/*
   Function: runSyntaxCheck
   Runs a syntax check such as checking semi-colons and unknown functions

   Parameters:
      script   - Code to check for syntax checking, "argv[1]" in main.cpp

   Returns:
      True if syntax is correct, false otherwise
*/
bool runSyntaxCheck(const char* script)
{
  /* To be implemented in next commit */
}

/*
   Function: parseLine
   Parses and runs the line of code passed thru argument

   Parameters:
      line   - Code to run
*/
void parseLine(const char* line)
{
  /* To be implemented in next commit */
}

/*
   Function: parseFile
   Opens the file and parses it line-by-line.

   Parameters:
      fileName   - File containing code to run
*/
void parseFile(const char* fileName)
{
  /* To be implemented in next commit */
}

void throwError()
{
  const char* errorDescription;
  const char* errorTechnicalInfo;

  switch(errorFlag)
  {
    case ERR_INVALID_ARGS:
      errorDescription = "The interpreter was called with an invalid number of arguments";
      errorTechnicalInfo = "Usage: ./gss [script.gss/code]";
      break;
  }

  printf("Error:  GSS Script could not be run due to an unexpected error: \n\t%s\n\t%s\n", errorDescription, errorTechnicalInfo);
}
