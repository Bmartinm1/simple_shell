#include "shell.h"

/**
 * _strcmp - Compares two strings to one another
 * @s1: string pointer 1
 * @s2: string pointer 2
 *
 * Return: Negative, 0, and positive if 1<2, equal, and 2<1 respectively
 */

int _strcmp(char *s1, char *s2)
{
  int i = 0;
  int funcRet = 0;

  while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
    i++;

  funcRet = s1[i] - s2[i];

  return (funcRet);
}
