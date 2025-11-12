#include<stdio.h>
#include<conio.h>
int main()
{
    int income ;
    float tax;
    printf("Enter your income:");
    scanf("%d",&income);
    if(income<=250000)
    {
        tax=0;
    }
    else if(income>250000 && income<=500000)
    {
        tax=tax +0.05*(income-250000);
    }
    else if(income>500000 && income<=1000000)
    {
        tax=tax + 0.2*(income-500000);
    }
    else
    {
        tax=tax + 0.3*(income-1000000);
    } 
    printf("The total tax to be paid is: %.2f",tax);
return 0;
}