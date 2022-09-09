#include <stdio.h>
/**
 * main - Entry
 * Description: Prints alphabets in lowercase
 * Return: 0 - Success
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++);
{
	putchar(ch);
}
putchar('\n');
return (0);
}
