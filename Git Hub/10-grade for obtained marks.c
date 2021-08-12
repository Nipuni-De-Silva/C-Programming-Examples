#include <stdio.h>
#include <stdlib.h>

//program to print letter grade when marks are entered

int main()
{

    float m;

    printf("Enter the mark :");
    scanf("%f", &m);


    if(m >= 0 && m <= 100){

        if(m >= 75){
            printf("A");
        }
        else if(m >= 65){
            printf("B");
        }
        else if(m >= 55){
            printf("C");
        }
        else if(m >= 45){
            printf("S");
        }
        else{
            printf("F");
        }

    }
    else{

        printf("Invalid mark enetered");
    }

    return 0;
}
