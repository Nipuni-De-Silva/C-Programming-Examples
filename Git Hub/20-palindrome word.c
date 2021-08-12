#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Program to check whether a word palindrome or not

int main()
{
    char word[20];

    printf("Enter the word: ");
    scanf("%s", &word);

    int result;

    int i = 0;  // first character of the word

    int j = strlen(word) - 1;   // last character of the word

    while( i < j ){

        if(word[i] != word[j]){
            result = 0;
            break; //  Not a palindrome word
        }
        else{
            result = 1; // Palindrome word
        }
        i++;
        j--;
    }

    if(result == 0){
        printf("Not a palindrome");
    }
    else{
        printf("Palindrome");
    }



    return 0;
}
