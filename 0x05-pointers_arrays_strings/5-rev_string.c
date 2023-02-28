#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 * @str: string to reverse
 */
void rev_string(char *str)
{
    int i = 0;
    int length = 0;
    char tmp[512];

    while (*(str + length) != '\0')
        length++;

    for (i = 0; i < length; i++)
        *(tmp + i) = *(str + length - i - 1);
    *(tmp + length) = '\0';

    for (i = 0; i < length; i++)
        *(str + i) = *(tmp + i);
    *(str + length) = '\0';
}
