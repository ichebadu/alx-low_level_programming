#include <stdlib.h>
#include <time.h>

/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int L;
	char s[] = "Last digit of";
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;
	
	if (L > 5)
	{
		printf("%s %d is %d and is greater than 5\n", s, n L);
	}

	else if (L == 0)
	{
		printf("%s %d is %d and is 0\n", s, n L);
	}

	else if (L < 6)
	{
		printf("%s %d is %d and is less than 6 than 0\n", s, n L);
	}

	return (0);
}
