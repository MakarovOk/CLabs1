#include<stdio.h>
#include<conio.h>

int main()
{
	int n, sum = 0;
	printf("Enter n");
	scanf_s("%d" , &n);
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	printf("Sum is %d", sum);
	return 0;
}