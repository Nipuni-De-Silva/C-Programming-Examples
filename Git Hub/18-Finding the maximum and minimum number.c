#include <stdio.h>
#include <stdlib.h>

// Program to find the highest number from 10 user inputs

int main()
{

    int i = 1;

    int max = 0;

    int min = 100;  // initialize value for min to check the condition

    int num;

    for(i = 1; i <= 10; i++){

        printf("Enter number %d: ",i);
        scanf("%d",&num);

        if(num > max){

            max = num;
        }
        else{
            if(num < min){

            min = num;
            }
        }
    }

    printf("Maximum Number : %d\n", max);

    printf("Minimum Number : %d", min);
    return 0;
}
