#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>
#

int _putchar(char c);
void initPrompt(void);
void _puts(char *str);
char fetchenv(char *target, char **env);
char fetchpath(char **env);
int _strcmp(char *s1, char *s2);

#endif
