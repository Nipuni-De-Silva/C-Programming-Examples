#include <stdio.h>
#include <stdlib.h>


// Sum of 10 user input numbers

int main()
{
    int i = 1;

    int n,sum = 0;

    while(i <= 10){

        printf("Enter number %d: ",i);
        scanf("%d",&n);

        sum += n;

        i++;
    }
    printf("Sum of ten numbers: %d", sum);

    return 0;
}
