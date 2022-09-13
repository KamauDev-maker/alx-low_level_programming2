#include "main.h"
/**
 *_putchar - A program that prints _putchar
 *
 *Return: 0 if true
 */
int main(void)
{
char *sh = "_putchar";
while (*sh)
{
_putchar(*sh);
*sh++;
}
_putchar('\n');
return (0);
}
