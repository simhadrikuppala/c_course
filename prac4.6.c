#include<conio.h>
#include<stdio.h>
int main ()
{
    int n;int isprime=1;
    printf("enter the number");
    scanf("%d",&n);
 for(int i=2;i<n;i++)
 {
    if(n%i==0)
    {
      isprime=0;
      break;
    }
}
    if(isprime){
    printf("isprime");
    }else
    {
      printf("not prime");
      
    }
    return 0;
}