#include <stdio.h>
#include <stdlib.h>

// to check whether a number is a palindrome or not

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    int real_number = number;   // input number assign to real_number because number changed in while loop

    int last_index, reverse_number = 0,i = 0;

    while(number != 0){

        last_index = number % 10;   // to get the last index in each iterations

        reverse_number = reverse_number * 10 + last_index;

        number /= 10;

        i++;
    }

    if(real_number == reverse_number){
        printf("Palindrome number");
    }
    else{
        printf("Not a palindrome number");
    }
    return 0;
}
