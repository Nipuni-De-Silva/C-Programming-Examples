#include <stdio.h>
#include <stdlib.h>


// print decimal numbers to nearest decimal places

int main()
{

    float num1 = 2.345;

    double num2 = 5.725;

    //default float print
    printf("num1: %f \n",num1);     //2.345000

    //default double print
    printf("num2: %lf \n\n",num2);    //5.725000


    //One decimal point
    printf("num1: %.1f \n",num1);   //2.3

    printf("num2: %.1lf \n\n",num2);  //5.7


    //Two decimal points
    printf("num1: %.2f \n",num1);   //2.34

    printf("num2: %.2lf \n\n",num2);  //5.72


    //Three decimal points
    printf("num1: %.3f \n",num1);   //2.345

    printf("num2: %.3lf ",num2);    //5.725


    return 0;
}
