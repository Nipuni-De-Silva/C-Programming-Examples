#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//Program to find root of a quadratic function

int main()
{
    float a, b, c, root1, root2;

    printf("Enter a: ");
    scanf("%f", &a);

    printf("Enter b: ");
    scanf("%f", &b);

    printf("Enter c: ");
    scanf("%f", &c);

    root1 = ((-1*b) + sqrt((b*b)-4*a*c))/(2*a);

    root2 = ((-1*b) - sqrt((b*b)-4*a*c))/(2*a);

    // roots with two decimal points
    printf("Root 1 :%.2f\n", root1);
    printf("Root 2 :%.2f", root2);

    return 0;
}
