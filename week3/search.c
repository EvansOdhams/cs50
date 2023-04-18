#include <stdio.h>

int main(void)
{
	int numbers[] = {20, 50, 10, 5, 100, 1, 50};
	int n;

	printf("Enter a number: ");
	scanf("%i", &n);

	for (int i = 0; i < 7; i++)
	{
		if (numbers[i] == n)
		{
			printf("Found\n");
			return (0);
		}
	}
	printf("Not FOund!!\n");
	return (1);
}
