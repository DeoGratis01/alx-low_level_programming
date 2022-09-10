#include <stdio.h>
#include <string.h>
/**
 *main - Entry point
 *Description:'Output the size of dataTypes'
 *Return: Always 0 (Success)
 */
int main(void)
{
int integer_type;
double double_type;
float float_type;
char char_type;
long long_type;
long long long_long_type;
printf("Size of a char: %ld byte(s)\n", sizeof(char_type));
printf("Size of an int: %ld byte(s)\n", sizeof(integer_type));
printf("Size of a long int: %ld byte(s)\n", sizeof(long_type));
printf("Size of a long long int: %ld byte(s)\n", sizeof(long_long_type));
printf("Size of a float: %ld byte(s)\n", sizeof(float_type));
return (0);
}

