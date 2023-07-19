#include <stdio.h>
#include <unistd.h>
/**
 * main - A program that prints _putchar
 * Return: always 0 (success)
 */
int main(void)
{
char string[] = "_putchar\n";
int length = sizeof(string) - 1;
write(1, string, length);
return (0);
}
