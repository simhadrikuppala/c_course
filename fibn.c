#include<stdio.h>
int fib(int );
int main()
{
int n =4;
printf("the element of %d in fibonaci series is %d",n, fib(n) );
return 0;
}
int fib(int n){
    if (n==1 || n==2){
    return 1;}
    
    else{
return fib(n-1)+fib(n-2);   }
}

