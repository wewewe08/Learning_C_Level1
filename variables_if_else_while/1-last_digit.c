#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* main - Entry point
 * Description: Print last digit in number and if it is greater or less than 5
 * Return: always 0 (Successful)
 */

int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_num = n % 10;

	if (last_num > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_num);
	}
	else if (last_num == 0)
	{
		printf("Last digit of %d is %d and is 0", n, last_num);
	}
	else if (last_num < 6 && last_num != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_num);
	}

	return (0);
}
