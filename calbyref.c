#include<stdio.h>
#include<conio.h>
int sum(int* ,int* );
int main(){
    int x=4;
    int y=5;
    printf("the value of a and b is : %d\n",sum(&x,&y));
    printf("the value of a and b is %d and %d",x,y);
    return 0;
}

    int sum(int *a,int *b)
    {
        *a=56;
        return *a + *b;
    }
