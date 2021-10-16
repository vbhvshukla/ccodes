/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Enter 5 digit number to reverse it");
    int n,d1,d2,d3,d4,d5;
    long int revnum;
    scanf("%d",&n);
    d5 = n%10;
    n=n/10;
    d4=n%10;
    n=n/10;
    d3=n%10;
    n=n/10;
    d2=n%10;
    n=n/10;
    d1=n%10;
    revnum = d5*10000 + d4*1000 + d3*100+d2*10+d1;
    printf("%ld",revnum);
    return 0;
}
