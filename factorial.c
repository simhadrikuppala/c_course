#include<stdio.h>
#include<conio.h>
int factorial(int );
int main()
{
    printf("the value of 6 is %d",factorial(0));
    return 0;
}
        int factorial(int n){int f;
            if(n==0 ||n==1){
            return 1;}
            else{
                f=n*factorial(n-1);
                return f;
            }
        }
       
    

        

