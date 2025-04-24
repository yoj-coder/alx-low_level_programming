#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - Print lowerecase letters
 *
 * Return: 0
 */

int main (void)
{
	char c = 'a';
	
	while (c <= 'z')
	putchar (c);
	c++;
	putchar ('\n');
	
	return (0);
}
