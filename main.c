#include "stdio.h"
#include "Utilities.h"

using namespace std;

/*
  Run checks including syntax check, if any return false, terminate with an error
  - otherwise, run the code
*/

int main(int argc, char *argv[])
{
  if(!runChecks(argc, argv[1]))
  {
    throwError();
    return -1;
  }

  if (argv[1].find(".gss"))
  {
    parseFile();
  }
  else
  {
    parseLine();
  }
  return 0;
}
