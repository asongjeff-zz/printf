#include "main.h"
#include <stdlib.h>

/**
 * print_rot13 - encodes a string using rot13 encryption
 * @s: string to be encoded
 *
 * Return: number of chars printed
 */
int print_rot13(char *s)
{
	unsigned int i = 0, j = 0;
	int counter = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(ahyy)";
	for (; s[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == s[i])
			{
				_putchar(out[j]);
				counter++;
				break;
			}
		}
		if (!in[j])
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
