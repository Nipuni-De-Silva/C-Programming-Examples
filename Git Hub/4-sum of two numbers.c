#include <stdio.h>
#include <stdlib.h>

// Sum of two Numbers

int main()
{
    int num1;

    int num2;

    int sum = 0;

    printf("Enter Number 1: ");
    scanf("%d",&num1);

    printf("Enter number 2: ");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("Total :%d",sum);
    return 0;
}
