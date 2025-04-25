#include <stdio.h>
/**
 * main - Entry point
 * Description - Print in reverse
 * Return: 0
 */
int main(void)
{
	char i = 'z';
	for (i = 'z'; i >= 'a'; i--)
	{
	putchar (i);
	}

	putchar ('\n');
	return (0);
}

