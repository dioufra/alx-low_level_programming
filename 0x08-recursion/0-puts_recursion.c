#include "main.h"

/**
 * void _puts_recursion - Prints a string followed by a newline recursivly
 * 
 * @c: pointer to the address of the string
 * 
 */

void _puts_recursion(char *s) {
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }
    _putchar(*s);
    _puts_recursion(s+1);
}