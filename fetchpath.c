#include "shell.h"

/**
 * fetchPath - fetches all paths from env variable(s)
 * @env: the env variables
 * 
 * Return: double pointer(?) to the path(s) on success.
 */

char fetchPath(char **env)
{
  // 1. Function needs parse through all env variables to find PATH
  // a. This function will be called fetchenv.c
  // b. Needs to be a duplicate string to accommodate for "PATH" being a shared variable

  // 2. Check variable storing the paths is not NULL

  // 3. Use strtok() -twice- to pull the actual path, delimiters will be "=" and ":"

  // 4. Iterate through result of previous step (strtok again?)

  // 5. Return result of last step, free any leftover malloc
}
