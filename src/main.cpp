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

  /*
    If there are more than one arguments (boundary to prevent a segmentation fault),
    and the first argument passed does not contain backticks, we have a file
  */
  if(argc > 1 && strstr(argv[1], "`") != NULL)
    isFile = false;
  else
    isFile = true;

  if(!runChecks(argc, argv, isFile))
    return -1;

  return 0;
}
