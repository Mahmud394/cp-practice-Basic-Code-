#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter any letter :");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a' :
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
     case 'O':
    case 'u':
    case 'U':
        printf("Vowel\n");
        break;
    default:
        printf("Consonent\n");

    }
}

