#include <stdio.h>
#include <stdlib.h>

/**
* main - print the string in the write function
*
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 1
*/
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful

			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
