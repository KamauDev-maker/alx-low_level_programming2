#include "main.h"
/**
 **cap_string -  capitilizes the first letters in word
 *@s: - string to be capitilezed
 *Return: string
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
while (!(s[i] >= 'a' && s[i] <= 'z'))
i++;
if (s[i - 1] == ',' ||
s[i - 1] == ';' ||
s[i - 1] == '.' ||
s[i - 1] == '!' ||
s[i - 1] == '?' ||
s[i - 1] == '"' ||
s[i - 1] == '(' ||
s[i - 1] == ')' ||
s[i - 1] == '{' ||
s[i - 1] == '}' ||
i == 0)
s[i] -= 32;
i++;
}
return (s);
}
