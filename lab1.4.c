#include <stdio.h>
#include <conio.h>

int main(void)
{
	int n, a, i = 1, answer = 0;
	printf("n = "); scanf_s("%d", &n);
	do
	{
		printf("a = "); scanf_s("%d", &a);
		if (i % 2 == 0)
		{
			answer++;
		}
		i++;
	} while (i <=n);

		printf("Answer = %d", answer);

	_getch();
	return 0;
}