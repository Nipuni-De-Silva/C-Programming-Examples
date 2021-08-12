#include <stdio.h>
#include <stdlib.h>

// Program to print ASCII value of Alphabet character (Capital letter and Simple letters with A - Z)


#define characters 26

int main()
{

    char capital_letter = 'A';

    char simple_letter = 'a';

    for(int i = 1; i <= characters; capital_letter++, simple_letter++, i++){

        printf("%c: %d\t\t %c: %d\n", capital_letter, capital_letter, simple_letter,simple_letter);

    }

    return 0;
}
