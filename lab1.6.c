#include <stdio.h>
#include <math.h>
#include <conio.h>

long int factorial(long int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
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