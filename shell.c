#include "shell.h"

/**
 * main - simple shell
 * @ac: arg count
 * @av: arg variables
 * @environ: env variables
 *
 * Return: Hopefully some completed commands
 */

int main(int ac __attribute__((unused)), char **av, char **environ)
{
	int loop = 1;
	char *input = NULL;
	size_t length;

	/**
	 *  using (void)av to allow compilation,
	 *  second instance of unused attr was
	 *  too long for betty
	 */

	(void)av;

	if (isatty(STDIN_FILENO) == 1)
		;

	while (loop)
	{
		initPrompt();

		if (getline(&input, &length, stdin) == -1)
			perror("We've got an error!\n");

		if (_strcmp(input, "exit\n") == 0)
		{
			loop = 0;
			exit(0);
		}

		else if (_strcmp(input, "env\n") == 0)
			fetchenv(environ);
	}
	return (0);
}
