#include <stdio.h>
/**
* main - A program that prints the size of various
* types on the computer it is compiled and run on
* Return 0 (Success)
*/
int main(void)
{
char a;
int b;
long int c;
float f;
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}