#include <stdio.h>
/**
 * main - Entry
 * Description - Prints lowercase and upppercase letters
 * Return: 0
 */

int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar (b);
		b++;
	}
	putchar ('\n');
	return (0);
}
