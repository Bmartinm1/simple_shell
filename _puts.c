#include "shell.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to string
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
}
