#include <stdio.h>
int main()
{
float bp,da,hra,grpay;
printf("Enter basic salary\n");
scanf("%f",&bp);
da = 0.5 * bp;
hra=0.2*bp;
grpay = bp+da+hra;
printf("Basic Salary = %f\n",bp);
printf("Dearness Allowance = %f\n",da);
printf("House Rent  = %f\n",hra);
printf("Gross Pay  = %f\n",grpay);
return 0;
}
