#include <stdio.h>
#include <string.h>
#include "headers/Utilities.h"

using namespace std;

/*
  Run checks including syntax check, if any return false, terminate with an error
  - otherwise, run the code
*/

int main(int argc, char *argv[])
{
  bool isFile;

  if(argc > 1 && strstr(argv[1], "`") != NULL)
    isFile = false;
  else
    isFile = true;

  if(!runChecks(argc, argv, isFile))
  {
    throwError();
    return -1;
  }

  return 0;
}
