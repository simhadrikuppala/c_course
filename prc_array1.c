#include<stdio.h>
int main()
{
    int a[10];
    a[0]=10;
    a[1]=20;
    a[2]=30;
    int *ptr=a;
    printf("the first element of array is %d\n:",*ptr);
    ptr=ptr+2;
    printf("the third element of array is %d\n",*ptr);
    return 0;
    
}