#include<stdio.h>
void isPrime(void)
{
	int check, x, y, a;
	printf("Prime number between 1 - ");
	scanf_s("%d", &a);
	for (x = 1; x <= a; x++)
	{
		check = 1;
		for (y = 2; y < x; y++)
		{
			if (!(x % y))
				check = 0;
		}
		if (check)
			printf("%d ", x);
	}
}
int main()
{
	isPrime();
	return 0;
}