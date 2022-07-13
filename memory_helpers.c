#include "main.h"

unsigned int _memcpy(buffer_t *output, const char *src, unsigned int n);
void free_buffer(buffer_t *output);
buffer_t *init_buffer(void);

/**
 * _memcpy - Copies n bytes from memory area src to
 *           the buffer contained in a buffer_t struct.
 * @output: A buffer_t struct.
 * @src: A pointer to the memory area to copy.
 * @n: The number of bytes to be copied.
 *
 * Return: The number of bytes copied.
 */
unsigned int _memcpy(buffer_t *output, const char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
<<<<<<< HEAD
	*(output->buffer) = *(src + index);
	(output->len)++;
	if (output->len == 1024)
	{
	write(1, output->start, output->len);
	output->buffer = output->start;
	output->len = 0;
	}
	else
	(output->buffer)++;
	}
=======
		*(output->buffer) = *(src + index);
		(output->len)++;

		if (output->len == 1024)
		{
			write(1, output->start, output->len);
			output->buffer = output->start;
			output->len = 0;
		}

		else
			(output->buffer)++;
	}

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (n);
}

/**
 * free_buffer - Frees a buffer_t struct.
 * @output: The buffer_t struct to be freed.
 */
<<<<<<< HEAD

=======
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
void free_buffer(buffer_t *output)
{
	free(output->start);
	free(output);
}

/**
 * init_buffer - Initializes a variable of struct type buffer_t.
 *
 * Return: A pointer to the initialized buffer_t.
 */
<<<<<<< HEAD

=======
>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
buffer_t *init_buffer(void)
{
	buffer_t *output;

	output = malloc(sizeof(buffer_t));
	if (output == NULL)
<<<<<<< HEAD
	return (NULL);
	output->buffer = malloc(sizeof(char) * 1024);
	if (output->buffer == NULL)
	{
	free(output);
	return (NULL);
	}
	output->start = output->buffer;
	output->len = 0;
=======
		return (NULL);

	output->buffer = malloc(sizeof(char) * 1024);
	if (output->buffer == NULL)
	{
		free(output);
		return (NULL);
	}

	output->start = output->buffer;
	output->len = 0;

>>>>>>> 2f59862ac2225eb5bea449a10992384b7e71e336
	return (output);
}
