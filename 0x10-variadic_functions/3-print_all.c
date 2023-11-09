#include "variadic_functions.h"

/**
 * print_all - prints allsaddd
 * @format: list all args
 */
void print_all(const char * const format, ...)
{
	char *str, *s = "";
	int i = 0;


	va_list all;

	va_start(all, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(all, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(all, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(all, double));
					break;
				case 's':
					str = va_arg(all, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(all);
}
