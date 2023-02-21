#include <stdio.h>

/**
 * main - prints all possible combination of two digit numbers.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 10; j < 100; j++)
		{
			if (i < j)
			{
				continue;
			}
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}
