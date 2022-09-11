#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Description: The numbers are all single digits
 * Return: Always(0) Success
 */
int main(void)
{
int i = '0';
char ch = 'a';
for (i = '0'; i <= '9'; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
