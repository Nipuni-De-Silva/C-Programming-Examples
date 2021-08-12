#include <stdio.h>
#include <stdlib.h>


// Program to print to sum of the numbers from 1 to 10

int main()
{
    int i = 1;

    int sum = 0;

    while(i <= 10){

        printf("%d \n", i);
        sum += i;
        i++;
    }

    printf("Sum of the numbers : %d",sum);
    return 0;
}
