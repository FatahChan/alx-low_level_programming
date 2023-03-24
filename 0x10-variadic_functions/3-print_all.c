#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{

	char c;
	int i;
	float f;
	char *s;
	int j = 0;
	va_list args;

	va_start(args, format);

	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c, ", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d, ", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f, ", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil), ");
				if (s != NULL)
					printf("%s, ", s);

		}
		j++;
	}
	printf("\n");
	va_end(args);
}
