#include<stdio.h>
#include<conio.h>

int main() {
    float a;
    double s = 0;
    printf("a = "); scanf_s("%f", &a);
    int i = 1;
    while (s <= a)
    {
        s = s + 1.0 / i;
        i++;
        printf("%f\n", s);

    }
    printf("%f", s);
    return 0;
}