#include "shell.h"

/**
 * initPrompt - starts a new prompt
 */

void initPrompt(void)
{
  // needs to check that process is associated with a terminal
  // via isatty()

  if (isatty(STDIN_FILENO) == 1)
    _puts("$ ");
}
