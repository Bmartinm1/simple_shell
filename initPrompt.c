#include "shell.h"

/**
 * initPrompt - starts a new prompt
 */

void initPrompt(void)
{
  /* checks that process is associated with a terminal */

	if (isatty(STDIN_FILENO) == 1)
		_puts("$ ");
}
