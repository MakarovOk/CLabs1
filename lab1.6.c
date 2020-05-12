#include <stdio.h>
#include <math.h>
#include <conio.h>


long int factorial(int n) {
    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() 
{
    int k, n;
    double x, p = 1;
    printf("n = \nx = \n"); scanf_s("%d",&n);
    scanf_s("%lf", &x);
    for (k = 1; k <= n; k++)
        p = p * (1 + sin(k * x)) / factorial(k);
    printf("%lf\n", p);
    return 0;
}
