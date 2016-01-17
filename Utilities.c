#include "Utilities.h"

/*
   Function: runChecks
   Runs argument check and calls runSyntaxCheck to check syntax for correct-ness

   Parameters:
      argCount - Number of arguments passed to program, "argc" in main.cpp
      script   - Code to check for syntax checking, "argv[1]" in main.cpp

   Returns:
      True if syntax is correct and argCount is lower than 2, false otherwise

   See Also:
      runSyntaxCheck(char* script);
*/
bool runChecks(int argCount, char* script)
{
  if(argCount > 1)
    return false;
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
bool runSyntaxCheck(char* script)
{
  /* To be implemented in next commit */
}

/*
   Function: parseLine
   Parses and runs the line of code passed thru argument

   Parameters:
      line   - Code to run
*/
void parseLine(char* line)
{
  /* To be implemented in next commit */
}

/*
   Function: parseFile
   Opens the file and parses it line-by-line.

   Parameters:
      fileName   - File containing code to run
*/
void parseFile(char* fileName)
{
  /* To be implemented in next commit */
}

void throwError()
{
  char* errorDescription;
  char* errorTechnicalInfo;

  switch(errorFlag)
  {
    case ERR_TOO_MANY_ARGS:
      errorDescription = "The interpreter was called with too many arguments, usage: ./gss [script.gss/code to execute]"
      errorTechnicalInfo = "--";
      break;
  }

  printf("Error: GSS Script could not be run due to an unexpected error;\n\t%s\n%s\n", errorDescription, errorTechnicalInfo);
}
