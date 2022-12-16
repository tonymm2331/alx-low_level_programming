#include "main.h"

/**
<<<<<<< HEAD
 * *main - prints the word _putchar
 * *
 * *Return: 0 on success execution.
 **/
=======
*main - prints the word _putchar
*
*Return: 0 on success execution.
*/
>>>>>>> d3703d3a2ff1eb0819ec975e056b2edfdc04211e

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
