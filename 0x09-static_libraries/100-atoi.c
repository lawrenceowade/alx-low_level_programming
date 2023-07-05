#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: the string to use.
 * Return: integer.
 */

int _atoi(const char *s)
{
    int sign = 1;
    int res = 0;
    int i = 0;

    while (s[i] == ' ')
    {
        i++;
    }

    if (s[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (s[i] == '+')
    {
        i++;
    }

    while (s[i] >= '0' && s[i] <= '9')
    {
        res = (res * 10) + (s[i] - '0');
        i++;
    }

    return (res * sign);
}
