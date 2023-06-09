#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring  in s string
 *
 * @haystack: string to search in
 * @needle: string to search
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
    int i;

    if (*needle == 0)
        return (haystack);
    while (*haystack)
    {
        i = 0;

        if (haystack[i] == needle[i])
        {
            while (haystack[i] == needle[i])
            {
                if (needle[i + 1] == '\0')
                    return (haystack);
                i++;
            }
        }
        haystack++;
    }
    return ('\0');
}
