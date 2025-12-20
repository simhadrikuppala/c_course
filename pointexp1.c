#include<stdio.h>
#include<conio.h>
int main(){
    int a=5;
    int *b=&a;
    int c=*b;
    printf("the address of a is %u\n",&a);
    printf("the address of a is %u\n",b);
    printf("the value of b is %u\n",c);
    return 0;
}