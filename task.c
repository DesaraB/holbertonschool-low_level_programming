#include <stdio.h>

int countOfValues(int *a, int size, int min, int max)
{
    int i;
	int count = 0;

    for (i = 0; i < size; i++)
	{
		if(a[i] >= min && a[i] <= max)
		{
			count++;
		}
	}
	return count;

}

int main()
{
	int a[] = {10, 15, 20, 25, 30};
	int size = sizeof(a) / sizeof(a[0]);
	int min = 10;
	int max = 30;
	int result = countOfValues(a, size, min, max);

	printf("The number of values between %d and %d is %d\n", min, max, result);

	return (0);

}