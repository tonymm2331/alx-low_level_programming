#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _isNum - check if is a number
*@num: string to check
*Return: 1 is numm, 0 not num
*/
int _isNum(char *num)
{
	int i;

	for (i = 0; num[i] != '\0'; i++)
	{
		if (num[i] < '0' || num[i] > '9')
			return (0);
	}
