#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5");
	if (last_digit == 0)
		printf("and is 0");
	if ((last_digit < 6) && (last_digit != 0))
		printf("and is less than 6 and not 0");

	printf("\n");
	return (0);
}
