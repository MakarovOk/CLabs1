#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(void) 
{
	float a, y;
	printf("A = "); scanf_s("%f", &a);

	if (a <= -1) {
		y = -1/pow(a,2);
	}
	if (2 >= a >= -1) {
		y = pow(a,2);
	}
	if (a >= 2) {
		y = 4;
	}
	printf("%.2f", y);
	_getch();
	return 0;


	int _getch();
	return 0;
}
