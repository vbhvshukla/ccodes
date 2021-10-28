#include <stdio.h>

int main()
{
  int num,one,two,three,four,five;
  printf("Enter five digit number\n");
  scanf("%d",&num);
  printf("You have entered %d\n",num);
  
  one = num%10;
  num = num/10;

  two = num%10;
  num = num/10;

  three = num%10;
  num = num/10;

  four = num%10;
  num = num/10;

  five = num%10;
  num = num/10;

    int sum;
    sum  = one+two+three+four+five;
    printf("%d",sum);
      
    return 0;
}
