#include <stdio.h>
#include <stdlib.h>

//Highest number among three numbers

int main()
{
    int x;

    int y;

    int z;

    printf("Enter the number 1: ");
    scanf("%d",&x);

    printf("Enter the number 2: ");
    scanf("%d",&y);

    printf("Enter the number 3: ");
    scanf("%d",&z);

    if(x == y && y == z){
        printf("Three numbers are equal");
    }
    else if(x > y){
        if(x > z){
            printf("X has the highest value");
        }
        else{
            printf("Z has the highest value");
        }
    }else if (y > z){
        printf("Y has the highest value");
    }
    else{
        printf("Z has the highest value");
    }

    return 0;
}
