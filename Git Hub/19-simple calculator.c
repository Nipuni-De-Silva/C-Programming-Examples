#include <stdio.h>
#include <stdlib.h>

// Simple calculator

int main()
{

    int num1, num2;

    char symbol;

    printf("Enter operator: ");
    scanf("%c",&symbol);

    printf("Enter number 1: ");
    scanf("%d",&num1);

    printf("Enter number 2: ");
    scanf("%d",&num2);


    switch(symbol){

        case '+':
            printf("%d", num1+num2);
            break;

        case '-':
            printf("%d", num1-num2);
            break;

        case '*':
            printf("%d", num1*num2);
            break;

        case '/':
            printf("%d", num1/num2);
            break;

        default:
            printf("Invalid operator");

    }

    return 0;
}
