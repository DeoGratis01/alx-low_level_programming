#include <stdio.h>
/**
 *main - Entry point
 *Description:'output aplphabet in small letters'
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
