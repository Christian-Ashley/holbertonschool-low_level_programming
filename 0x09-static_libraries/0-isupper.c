#include "main.h"

/**
* _isupper - Checks if variable is upper or lowercase
* @c: the char that is checked
*
* Return: 1 or 0
*/

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	return (0);
}
