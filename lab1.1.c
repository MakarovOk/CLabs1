#include<stdio.h>
#include<conio.h>
#include<math.h>
double main(int argc, char* argv[])
{
	double x, y, z, a, b, x1;
	printf("x = "); scanf_s("%lf", &x);
	printf("y = "); scanf_s("%lf", &y);
	printf("z = "); scanf_s("%lf", &z);
	printf("x1 = "); scanf_s("%lf", &x1);

	a = pow(log(fabs(((x - sqrt(fabs(y)))) * (x + (y / (z + pow(x, 6) / 4))))), 1 / 5);
	b = -x1 + pow(x1, 2) / (24) - pow(x1, 5) / (720);

	if (log(fabs(((x - sqrt(fabs(y)))) * (x + (y / (z + pow(x, 6) / 4))))) == 0)
		printf("error");
	else if ((z + pow(x, 6) / 4) == 0)
		printf("error");
	else if (x - sqrt(fabs(y) == 0))
		printf("error");
	else {
		printf("%lf", a);
		if (x1 != 0)
			printf("b = &lf ", b);
		else
			printf("error");

	}
	return 0;

}