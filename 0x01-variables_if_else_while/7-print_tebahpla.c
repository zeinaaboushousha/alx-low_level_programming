#include <stdio.h>
/**
 * main - print alphabets in reverse mode
 * Return: (0)
 */
int main(void)
{
char alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet__;
}
putchar('\n');
return (0);
}
