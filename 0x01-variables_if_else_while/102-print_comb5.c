#include <stdio.h>
/**
 *main - prints possible of two two digits
 *
 *Return: 0 if true
 */
int main(void)
{
int i;
int j;
for (i = 0; i <= 98; i++)
{
for (j = 0; j <= 99; j++)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(32);
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i / 10 != 9 || i % 10 != 8)
{
putchar(44);
putchar(32);
}
}
}
putchar(10);
return (0);
}
