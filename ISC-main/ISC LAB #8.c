// Question. Program to check if an entered alphabet is a vowel or not.
// Ans.
#include <stdio.h>
void main()
{
    char c;
    printf("Enter an alphabet : ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Inputted Alphabet is a vowel");
        break;
    
    default:
     printf("Inputted Alphabet is not a vowel");
        break;   
    }
}
