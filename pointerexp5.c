#include<stdio.h>
#include<conio.h>
int main(){
    int a=2;
    int *b=&a;
    int **c=&b;
    printf("the value of a is %d \n:",a);
    printf("the address of *b is %u \n:",*(&b));
    printf("the address of **c is %u \n:",**(&c));
return 0;

}