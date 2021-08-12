#include <stdio.h>
#include <stdlib.h>

// Program to print the number is primary or not

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    int i, result;

    // The numbers only divide by 1 and itself is called a prime number.
    // every number divide by 1 and factors of all numbers are  between 1 - 10
    for(i = 2; i <= 9; i++){

        // The number only divide by 1 and itself is called a prime number.if it is divide by another, its not a prime number
        if(i != num){

            if(num % i == 0){
                result = 0;
                break;      // not a prime number
            }
            else{
                result = 1; // prime number
            }
        }
    }

    if(num <= 1){
        printf("Not a Prime number"); // 1 and numbers less than 1 is not prime numbers
    }

    else if(result == 0){
        printf("Not a Prime Number");
    }

    else{
        printf("Prime Number");
    }
    return 0;
}
