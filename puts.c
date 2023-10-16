#include "main.h"
/**
 * _puts - writes the string to stdout
 * @str: The string to print
 * Return: On success 1.
 */
int _puts(char *str)
{
        int i = 0;

        while (str[i] != '\0')
        {
                _putchar(str[i]);
                i++;
        }
        return (i);
}
