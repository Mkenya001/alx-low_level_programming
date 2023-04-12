<<<<<<< HEAD
#include "main.h"		
#include <unistd.h>
		
/**		
 * _putchar - writes the character c to stdout		
 * @c: The character to print		
 *		
 * Return: On success 1.
 *
=======
#include "main.h"
		
#include <unistd.h>
		
/**
		
 * _putchar - writes the character c to stdout
		
 * @c: The character to print
		
 *
		
 * Return: On success 1.
		
>>>>>>> c22e237461c9f523a4a468bbc04386db23d38688
 * On error, -1 is returned, and errno is set appropriately.
		
 */
		
<<<<<<< HEAD
 int _putchar(char c)
=======
int _putchar(char c)
>>>>>>> c22e237461c9f523a4a468bbc04386db23d38688
		
{
		
	return (write(1, &c, 1));
		
}
