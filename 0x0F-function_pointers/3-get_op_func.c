#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 */

int (*get_op_func(char *s))(int, int)
{
    if (s[1] != '\0')
        return NULL;

    switch (s[0])
    {
        case '+':
            return op_add;
        case '-':
            return op_sub;
        case '*':
            return op_mul;
        case '/':
            return op_div;
        case '%':
            return op_mod;
        default:
            return NULL;
    }
}
