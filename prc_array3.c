#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int n;
printf("enter the number to print its multiplication table:\n");
scanf("%d",&n);
   
    for(int i=0;i<=10;i++)
    { 
       
        a[i]=n*i;
        printf("the multiplication of table %d x %d is %d\n :",n,i,a[i]);
        

    }
    
    return 0;
}

