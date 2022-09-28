#include "main.h"
/**
 * _print_rev_recursion - prints a reversed string.
 * @s: string to be printed in reverse.
 * Return: Nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);

		_putchar(*s);
	}
}