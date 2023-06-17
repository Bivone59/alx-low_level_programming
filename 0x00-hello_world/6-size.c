#include <stdio.h>
/*
 * main - ("Prgram that prints a size of variuos computer types"\n);
 * Return: 0 (succes s)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("size of character: %lu byte(s)\n", (unsigned long) sizeof(a));
printf("size of an int: %lu byte(s)\n", (unsigned long) sizeof(b));
printf("size of a long int: %lu byte(s)\n", (unsigned long long) sizeof(c));
printf("size of a long long int: %lu byte(s)\n", (unsigned long) sizeof(d));
printf("size of a float: %lu byte(S)\n", (unsigned long) sizeof(f));
return (0);
}
