#include "main.h"
#include "2-strlen.c"
/**
 * puts2 - puts string twice
 *
 * @str: string to put twice
 */

void puts2(char *str)
{ 
	int i;

	for (i = 0; i < _stren(strs); i++)
	{
		if (i % 2 == 0)
		{
			if (i % 2 == 0)
			{
				_Putchar(str[i]);
			}
		}
		_putchar('\n');
	}
					

