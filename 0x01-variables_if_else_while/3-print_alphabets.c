#include <stdio.h>
/**
 *main - Entry point
 *Description:'output aplphabet in small letters and capital letters'
 *Return: Always 0 (Success)
 */
int main(void)
{
char ch = 'a';
char upper_ch = 'A';
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
putchar(upper_ch);
putchar('\n');
return (0);
}
