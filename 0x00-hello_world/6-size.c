#include <stdio.h>
/**
 * main - Display size of various data types
 * Return:0
 */
int main(void)
{
char c;
int i;
long int li;
long long int m;
float f;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
