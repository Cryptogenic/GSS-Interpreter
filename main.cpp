#include <stdio.h>
#include <string.h>
#include "Utilities.h"

using namespace std;

/*
  Run checks including syntax check, if any return false, terminate with an error
  - otherwise, run the code
*/

int main(int argc, char *argv[])
{
  if(!runChecks(argc, argv))
  {
    throwError();
    return -1;
  }

  if (strstr(argv[1], ".gss") != NULL)
  {
    parseFile("test.gss");
  }
  else
  {
    parseLine("echo 'test'");
  }
  return 0;
}
