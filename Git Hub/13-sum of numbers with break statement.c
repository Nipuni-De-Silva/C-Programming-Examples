#include <stdio.h>
#include <stdlib.h>

/*
 program to find the sum of user input numbers and If the user enters a negative value,
 the sum of the numbers obtained so far is printed out and the program ends.
*/

int main()
{

    int i = 1;

    int num;

    int sum = 0;

    while(i <= 10){

        printf("Enter the number %d: ", i);
        scanf("%d", &num);

        if(num < 0){
            break;
        }
        else{
            sum += num;
        }
        i++;

    }

    printf("Sum of the entered numbers: %d", sum);

    return 0;
}
