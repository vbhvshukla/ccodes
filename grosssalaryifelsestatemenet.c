/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float bs,hra,da,gs;
    printf("Enter the basic salary of employee\n");
    scanf("%f",&bs);
    
    if(bs <= 1500){
        hra = 0.01*1500;
        da = 0.90*1500;
        gs = bs+hra+da;
        printf("Gross salary of employee : %f\n",gs);
    }
    else{
         hra = 500;
        da = 0.98*1500;
        gs = bs+hra+da;
        printf("Gross salary of employee : %f\n",gs);
    }

    return 0;
}
