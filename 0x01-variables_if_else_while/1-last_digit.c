/**
 * main - prints the last digit of a randomly generated number
 * and whwther it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
nt main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and isgreater than 5\n",
				n, n % 10);
	}
	else
	{
		printf("last digit of % is % and is o\n",
				n, n % 10);
	}
	return (0);
}
