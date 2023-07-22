#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: the number to be checked
 * Return: 1 for a character that will be a digit or 0 for any else
 */

int _isupper(int x)
{

        if (x >= 48 && x <= 57)
        {
        return (1);
        }
        return (0);
}
