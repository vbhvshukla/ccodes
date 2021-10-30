/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int qt;
    float rate,expense,texpense,discount;
    printf("Enter the quantity of the product\n");
    scanf("%d",&qt);
    printf("Enter the price of the product\n");
    scanf("%f",&rate);
    
    expense = qt*rate;
    if(expense >= 1000){
        discount = 0.01*expense;
        texpense = expense - discount;
        printf("Total discount : %f | Total due : %f \n",discount,texpense);
    }
    else{
        printf("You're not eligible for a discount , hence total due : %f \n",expense);
    }

    return 0;
}
