#include "shell.h"

/**
 * fetchenv - fetches env variable
 * @env: all env variables
 *
 * Return: The env variable
 */

void fetchenv(char **env)
{
	int i;
	/* 1. Check env is not NULL */
	if (!env)
		printf("Nothing here");

	/* 2. Iterate through env variables and send to stdout */
	for (i = 0; env[i]; i++)
		_puts(env[i]);
	_putchar('\n');
}
