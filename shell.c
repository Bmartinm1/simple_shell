#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and err num is set appropriately.
 */

int _putchar(char c)
{
  return (write(1, &c, 1));
}

// /**
//  * main - entry point
//  */

// int main(void)
// {
//   pid_t myPid;
//   pid_t myPpid;
//   myPid = getpid();
//   myPpid = getppid();

//   printf("%d\n", myPid);
//   printf("%d\n", myPpid);
// }

void prompt(void)
{
  _putchar('$');
  _putchar(' ');
}

/**
 * main function
 */

int main(int ac, char **av)
{
  int i;
  char *input = NULL;
  size_t len;

  while (1)
  {
    prompt();

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
