#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched.
 * @c: The character to be located.
 * Return: If c is found - a pointer to the first occurence. 
 *  If c is not found - NULL.
 */

unsigned int _strspn(char *s, char *accept) 
{
	unsigned int bytes = 0; 
	int index;

	while(*s)
	{
		for (index = 0; accept[index]; index++) 
		{
			if (*s == accept[index])
			{

				 bytes++; 
				  break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
		}

		return(bytes);
}



