#include <stdio.h>
#include <stdlib.h>

// Program to swap two numbers

int main()
{
    int a;

    int b;

    int temp;   //temporal variable for swapping


    //before swap
    printf("a: ");
    scanf("%d",&a);

    printf("b: ");
    scanf("%d",&b);

    printf("\n");

    //swap two numbers
    temp = a;

    a = b;

    b = temp;


    //after swap
    printf("a: %d \n",a);

    printf("b: %d \n",b);

    return 0;
}
