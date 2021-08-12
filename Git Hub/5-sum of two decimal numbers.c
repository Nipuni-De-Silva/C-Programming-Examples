#include <stdio.h>
#include <stdlib.h>

// Sum of Two decimal numbers

int main()
{
    float num1;

    double num2;

    printf("Enter number 1: ");
    scanf("%f",&num1);

    printf("Enter number 2: ");
    scanf("%lf",&num2);

    printf("Total : %.2f",num1 + num2);

    return 0;
}
