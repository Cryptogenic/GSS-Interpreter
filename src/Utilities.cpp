#include "headers/Utilities.h"

int errorFlag;
std::string errorDescription;
std::string errorTechnical;

/*
   Function: runChecks
   Runs argument check and calls runSyntaxCheck to check syntax for correct-ness

   Parameters:
      argCount  - Number of arguments passed to program, "argc" in main.cpp
      arguments - Contains code to check and other arguments, "argv" in main.cpp
      isFile    - Set if running syntax checker on a file

   Returns:
      True if syntax is correct and argCount is lower than 2, false otherwise

   See Also:
      runSyntaxCheck(std::string eval, bool isFile);
*/
bool runChecks(int argCount, char* arguments[], bool isFile)
{
  std::string codeLine;

  // If we're interpreting a file we don't need more than one argument passed
  if(argCount != 2 && isFile)
  {
    errorFlag = ERR_INVALID_ARGS;
    if(argCount > 2) errorDescription = "The interpreter was called with too many arguments!";
    if(argCount < 2) errorDescription = "The interpreter was called with too few arguments!";

    errorTechnical = "Usage: ./gss [script.gss/`code to run`]";

    throwError();

    return false;
  }

  // If we don't have a file, we want to get all arguments in-case the line of
  // code passed contains space characters
  if(!isFile)
  {
    for(int i = 1; i < argCount; i++)
    {
      codeLine.append(arguments[i]);
    }
    runSyntaxCheck(codeLine, false);
  }

  if(isFile)
  {
    runSyntaxCheck((std::string)arguments[1], true);
  }
}

bool runSyntaxCheck(std::string eval, bool isFile)
{
  std::string line;
  std::string code;

  if(isFile)
  {
    std::ifstream infile(eval);

    if(infile.is_open())
    {
      while(getline(infile, line))
      {
        code += line;
      }
    }
    else
    {
      errorFlag = ERR_INVALID_FILE;
      errorDescription = "The interpreter could not parse the file '" + eval + "'";

      errorTechnical = "Usage: ./gss [script.gss/`code to run`]";

      throwError();

      return false;
    }
  }
  else
  {
    code = eval;
  }

  return true;
}

/*
   Function: throwError
   Prints detailed error information based on the set flag "errorFlag"

   See Also:
      Flags enum structure (Structures.h)
*/
void throwError()
{
  std::string errorTitle;

  switch(errorFlag)
  {
    case ERR_INVALID_ARGS:
      errorTitle = "The interpreter encountered a fatal error: invalid arguments";
      break;
    case ERR_INVALID_FILE:
      errorTitle = "The interpreter encountered a fatal error: file not found/corrupt";
      break;
  }

  printf("Error:  %s; \n\t\t%s\n\t\t%s\n\n", errorTitle.c_str(), errorDescription.c_str(), errorTechnical.c_str());
}
