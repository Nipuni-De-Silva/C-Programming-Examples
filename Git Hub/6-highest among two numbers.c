#include <stdio.h>
#include <stdlib.h>

// Largest number among two numbers

int main()
{
    int x;

    int y;

    printf("Enter number 1: ");
    scanf("%d",&x);

    printf("Enter number 2: ");
    scanf("%d",&y);


    if(x == y){
        printf("Two numbers are equal");
    }
    else if(x > y){
        printf("X is greater than Y");
    }
    else{
        printf("Y is greater than X");
    }
    return 0;
}
