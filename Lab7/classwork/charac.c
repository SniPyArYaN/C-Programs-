#include <stdio.h>
int main()
 {
    char ch;
    int c;
    printf("Enter the character :");
    scanf("%c", &ch);
    c=(int)ch;
     if(ch >= 'A' && ch <= 'Z')
        printf("%c is an UpperCase Alphabet", ch);
    else if(ch >= 'a' && ch <= 'z')
        printf("%c is a LowerCase Alphabet", ch);
    else
        printf("%c is not an Alphabet", ch);
    return 0;
 }