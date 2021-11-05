#include <stdio.h>

int main()
{
    printf("Enter a number to find if it's a palindrome or not\n");
    int a,temp,num=0,tempo;
    scanf("%d",&a);
    tempo = a;
    while(a>0){
        temp = a%10;
        num = (num*10)+temp;
        a=a/10;
    }
    if(tempo==num){
        printf("%d is a palindrome",tempo);
    } 
    else {
        printf("%d is not a palindrome",a);
    }
    return 0;
}
