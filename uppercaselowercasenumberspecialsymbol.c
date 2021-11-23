
#include <stdio.h>

int main()
{
    printf("Enter a character to find if its uppercase , lowercase or special symbols\n");
    char x;
    scanf("%c",&x);
    int y = x; 
    if(y>=65 && y<=90){
        printf("The character is in uppercase");
    }
    if(y>=97 && y<=122){
        printf("The character is in lowercase");
    }
    if(y>=48 && y<=57){
        printf("The character is a number");
    }
    if(y>=0 && y<=47||y>=58 && y<=64 || y>=91 && y<=96 || y>=123 && y<=127){
        printf("The character is a special symbol");
    }
    return 0;
}
