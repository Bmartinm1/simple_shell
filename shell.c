#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "shell.h"

/**
 * fetchPID - fetches PID and PPID
 */

// int fetchPID(void)
// {
//   pid_t myPid;
//   pid_t myPpid;
//   myPid = getpid();
//   myPpid = getppid();

//   printf("%d\n", myPid);
//   printf("%d\n", myPpid);
// }

/**
 * main function
 */

int shell(int ac, char **av)
{
  int i;
  char *input = NULL;
  size_t len;

  while (1)
  {
    initPrompt();

    if (getline(&input, &len, stdin) == -1)
      printf("Nothing to see here\n");
    else
      printf("%s\n", input);

    for (i = 0; av[i]; i++)
    {
      printf("av[%d]: %s\n", i, av[i]);
    }
    exit(1);
  }
  return (0);
}
