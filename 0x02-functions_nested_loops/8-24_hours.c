#include"main.h"
/**
 * jack_bauer - print every minute of the day from 0:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));
			_putchar(':');
			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');
		}
	}
}
