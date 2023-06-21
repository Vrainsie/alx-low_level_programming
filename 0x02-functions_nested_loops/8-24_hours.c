#include "main.h"

/**
 * jack_bauer - Prints minutes and hour
 * Return: void
 */
void jack_bauer(void)
{
	int hrs = 0;
	int mins;

	while (hrs <= 23)
	{
		/*nest new loop to print minutes*/
		mins = 0;
		while (mins < 60)
		{
			/*now print hr x60*/
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');

			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			mins++;

			_putchar('\n');
		}

		/*Increment hrs to nxt*/
		hrs++;
	}
}
