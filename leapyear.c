#include <stdio.h>

int main()
{
    printf("Enter the year to check if it's leap year or not\n");
    int yr;
    scanf("%d",&yr);
    if(yr%4==0&& yr%400==0||yr%100!=0){
        printf("%d is a leap year",yr);
    }
    else {
        printf("%d is not a leap year",yr);
    }

    return 0;
}
