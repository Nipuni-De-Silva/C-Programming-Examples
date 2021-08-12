#include <stdio.h>
#include <stdlib.h>

// Program to print sum of 10 positive integers, negative integer input ignored
int main()
{
    int i = 1;

    int num, sum = 0;


    while(i <= 10){

        printf("Enter the number %d: ",i);
        scanf("%d", &num);

        if(num < 0){
            i++;
            continue;
        }
        else{
            sum += num;
        }
        i++;
    }

    printf("Sum of the numbers : %d", sum);

    return 0;
}
