#include <stdio.h>
/**
 * main - Entry point
 * Description - Print all except q and e
 * Return: 0
 */

int main(void)
{
	char i = 'a';
	for(i = 'a';i <= 'z';i++)
	if(i != 'e' && i != 'q')
	putchar (i);

	putchar ('\n');
	return (0);
}
