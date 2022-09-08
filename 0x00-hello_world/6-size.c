#include <stdio.h>
/**
 *main - prints the various sizes of data
 *
 *Return: 0 if true
 */
int main(void)
{
printf("Size of an int: %lu byte (s)\n", sizeof(int));
printf("Size of an char: %lu byte\n", sizeof(char));
printf("Size of an long int: %lu byte (s)\n", sizeof(long int));
printf("Size of an float: %lu byte (s)\n", sizeof(float));
printf("Size of an long long int: %lu byte (s)\n", sizeof(long long int));
return (0);
}
