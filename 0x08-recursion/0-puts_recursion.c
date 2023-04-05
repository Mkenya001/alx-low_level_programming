#include "main.h"
<<<<<<< HEAD
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
=======
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')

	putchar('\n');
	return;
	}

	putchar("%s","*s");
	'_int'(s) = (s) + 1;
(()s = s + 1; (}
>>>>>>> 621c4ee3566ce872a07055ec874f8a55f591ebf2
