#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number for byte to copy form src
 * Description: copies at most n bytes of the the string pointed to by src,
 *              including the null terminated byte, to the buffer pointed to by dest.
 *              The string may not overlap, and the dest must be large enough
 * Return: A pointer to the destination string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i = 0;

        while (*(src + i) && i < n)
                *(dest + i++) = *(src + i);
        while (i < n)
	{
                *(dest + i) = '\0';
		i++;
	}
        return (dest);
}
