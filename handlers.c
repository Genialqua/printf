#include "main.h"

unsigned char handle_flags(const char *flag, char *index);
unsigned char handle_length(const char *modifier, char *index);
int handle_width(va_list args, const char *modifier, char *index);
int handle_precision(va_list args, const char *modifier, char *index);
unsigned int (*handle_specifiers(const char *specifier))(va_list, buffer_t *,
<<<<<<< HEAD
unsigned char, int, int, unsigned char);
=======
		unsigned char, int, int, unsigned char);
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336

/**
 * handle_flags - Matches flags with corresponding values.
 * @flag: A pointer to a potential string of flags.
 * @index: An index counter for the original format string.
<<<<<<< HEAD
 * @handle_specifiers: to handle specifiers
 *
 * Return: If flag characters are matched - a corresponding value.
 * Otherwise - 0.
=======
 *
 * Return: If flag characters are matched - a corresponding value.
 *         Otherwise - 0.
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 */
unsigned char handle_flags(const char *flag, char *index)
{
	int i, j;
	unsigned char ret = 0;
	flag_t flags[] = {
<<<<<<< HEAD
	{'+', PLUS},
	{' ', SPACE},
	{'#', HASH},
	{'0', ZERO},
	{'-', NEG},
	{0, 0}
	};
	for (i = 0; flag[i]; i++)
	{
	for (j = 0; flags[j].flag != 0; j++)
	{
	if (flag[i] == flags[j].flag)
	{
	(*index)++;
	if (ret == 0)
	ret = flags[j].value;
	else
	ret |= flags[j].value;
	break;
	}
	}
	if (flags[j].value == 0)
	break;
	}
=======
		{'+', PLUS},
		{' ', SPACE},
		{'#', HASH},
		{'0', ZERO},
		{'-', NEG},
		{0, 0}
	};

	for (i = 0; flag[i]; i++)
	{
		for (j = 0; flags[j].flag != 0; j++)
		{
			if (flag[i] == flags[j].flag)
			{
				(*index)++;
				if (ret == 0)
					ret = flags[j].value;
				else
					ret |= flags[j].value;
				break;
			}
		}
		if (flags[j].value == 0)
			break;
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (ret);
}

/**
 * handle_length - Matches length modifiers with their corresponding value.
 * @modifier: A pointer to a potential length modifier.
 * @index: An index counter for the original format string.
 *
 * Return: If a lenth modifier is matched - its corresponding value.
<<<<<<< HEAD
 * Otherwise - 0.
=======
 *         Otherwise - 0.
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 */
unsigned char handle_length(const char *modifier, char *index)
{
	if (*modifier == 'h')
	{
<<<<<<< HEAD
	(*index)++;
	return (SHORT);
	}
	else if (*modifier == 'l')
	{
	(*index)++;
	return (LONG);
	}
=======
		(*index)++;
		return (SHORT);
	}

	else if (*modifier == 'l')
	{
		(*index)++;
		return (LONG);
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (0);
}

/**
 * handle_width - Matches a width modifier with its corresponding value.
 * @args: A va_list of arguments.
 * @modifier: A pointer to a potential width modifier.
 * @index: An index counter for the original format string.
 *
 * Return: If a width modifier is matched - its value.
<<<<<<< HEAD
 * Otherwise - 0.
=======
 *         Otherwise - 0.
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 */
int handle_width(va_list args, const char *modifier, char *index)
{
	int value = 0;

	while ((*modifier >= '0' && *modifier <= '9') || (*modifier == '*'))
	{
<<<<<<< HEAD
	(*index)++;
	if (*modifier == '*')
	{
	value = va_arg(args, int);
	if (value <= 0)
	return (0);
	return (value);
	}
	value *= 10;
	value += (*modifier - '0');
	modifier++;
	}
=======
		(*index)++;

		if (*modifier == '*')
		{ 
			value = va_arg(args, int);														if (value <= 0)
				return (0);
																				return (value);
		}

		value *= 10;
		value += (*modifier - '0');
		modifier++;
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (value);
}

/**
 * handle_precision - Matches a precision modifier with
<<<<<<< HEAD
 *                its corresponding value.
=======
 *                    its corresponding value.
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 * @args: A va_list of arguments.
 * @modifier: A pointer to a potential precision modifier.
 * @index: An index counter for the original format string.
 *
 * Return: If a precision modifier is matched - its value.
<<<<<<< HEAD
 * If the precision modifier is empty, zero, or negative - 0.
 * Otherwise - -1
=======
 *         If the precision modifier is empty, zero, or negative - 0.
 *         Otherwise - -1.
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 */
int handle_precision(va_list args, const char *modifier, char *index)
{
	int value = 0;

	if (*modifier != '.')
<<<<<<< HEAD
	return (-1);
	modifier++;
	(*index)++;
	if ((*modifier <= '0' || *modifier > '9') &&
	*modifier != '*')
	{
	if (*modifier == '0')
	(*index)++;
	return (0);
	}
	while ((*modifier >= '0' && *modifier <= '9') ||
	(*modifier == '*'))
	{
	(*index)++;
	if (*modifier == '*')
	{
	value = va_arg(args, int);
	if (value <= 0)
	return (0);
	return (value);
	}
	value *= 10;
	value += (*modifier - '0');
	modifier++;
	}
=======
		return (-1);

	modifier++;
	(*index)++;

	if ((*modifier <= '0' || *modifier > '9') &&
		 *modifier != '*')
	{
		if (*modifier == '0')
			(*index)++;
		return (0);
	}

	while ((*modifier >= '0' && *modifier <= '9') ||
		   (*modifier == '*'))
	{
		(*index)++;

		if (*modifier == '*')
		{
			value = va_arg(args, int);
			if (value <= 0)
				return (0);
			return (value);
		}

		value *= 10;
		value += (*modifier - '0');
		modifier++;
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (value);
}

/**
 * handle_specifiers - Matches a conversion specifier with
 *                     a corresponding conversion function.
 * @specifier: A pointer to a potential conversion specifier.
<<<<<<< HEAD
 * @char: a character
 * @int: an integer
=======
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
 *
 * Return: If a conversion function is matched - a pointer to the function.
 *         Otherwise - NULL.
 */
unsigned int (*handle_specifiers(const char *specifier))(va_list, buffer_t *,
<<<<<<< HEAD
unsigned char, int, int, unsigned char)
{
	int i;
	converter_t converters[] = {
	{'c', convert_c},
	{'s', convert_s},
	{'d', convert_di},
	{'i', convert_di},
	{'%', convert_percent},
	{'b', convert_b},
	{'u', convert_u},
	{'o', convert_o},
	{'x', convert_x},
	{'X', convert_X},
	{'S', convert_S},
	{'p', convert_p},
	{'r', convert_r},
	{'R', convert_R},
	{0, NULL}
	};
	for (i = 0; converters[i].func; i++)
	{
	if (converters[i].specifier == *specifier)
	return (converters[i].func);
	}
=======
		unsigned char, int, int, unsigned char)
{
	int i;
	converter_t converters[] = {
		{'c', convert_c},
		{'s', convert_s},
		{'d', convert_di},
		{'i', convert_di},
		{'%', convert_percent},
		{'b', convert_b},
		{'u', convert_u},
		{'o', convert_o},
		{'x', convert_x},
		{'X', convert_X},
		{'S', convert_S},
		{'p', convert_p},
		{'r', convert_r},
		{'R', convert_R},
		{0, NULL}
	};

	for (i = 0; converters[i].func; i++)
	{
		if (converters[i].specifier == *specifier)
			return (converters[i].func);
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (NULL);
}
