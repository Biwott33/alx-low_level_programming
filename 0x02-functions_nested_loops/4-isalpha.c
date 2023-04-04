#include "main.h"

/**
 * _isalpha - checks whether in put is
 *             an alphabetic character
 *
 * @c: the stored character to be checked
 *
 * Return: zero if charcter is not alphabetic
 *         1 if it is contained in alphabet
 */

int _isalpha(int c)
{
if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return (1);
else
return (0);
