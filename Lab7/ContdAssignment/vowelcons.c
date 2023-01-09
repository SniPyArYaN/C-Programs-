#include <stdio.h>
int main()
{
    char alpha;
    printf("ENTER THE ALPHABET--> ");
    scanf("%c",&alpha);
    if((alpha>=65 && alpha<=90) || (alpha>=97 && alpha<=122))
    {
    switch (alpha)
    {
    case 'a':
        printf("Its a vowel");
        break;
    case 'e':
        printf("Its a  vowel");
        break;
    case 'i':
        printf("Its a vowel");
        break;
    case 'o':
        printf("Its a vowel");
        break;
    case 'u':
        printf("Its a vowel");
        break;
    case 'A':
        printf("Its a vowel");
        break;
    case 'E':
        printf("Its a vowel");
        break;
    case 'I':
        printf("Its a vowel");
        break;
    case 'O':
        printf("Its a vowel");
        break;
    case 'U':
        printf("Its a vowel");
        break;
                                
        

    
    default:
        printf("Its a consonant");
        break;
    }
    }
    else{
        printf("The entered keyword is not an alphabet");
    }
}