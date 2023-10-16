#include "main.h"
/**
 * _printf - prints anything
 * @format: list of arguments
 * Return: number of chars
 */
int _printf(const char *format, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				sum += _putchar('%');
				continue;
			}
			else if (format[i] == 'c')
			{
				sum += _putchar(va_arg(args, int));
				continue;
			}
			else if (format[i] == 's')
			{
				sum += _puts(va_arg(args, char *));
				continue;
			}
		}
		else
			sum += _putchar(format[i]);
	}
	return (sum);
}
