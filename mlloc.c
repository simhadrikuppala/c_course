#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * ptr;
    int n;
    scanf("%d",&n);
   ptr =(int *) malloc(n * sizeof(int));
    ptr[0]=45;
    ptr[1]=46;
    ptr[2]=48;
    ptr[3]=49;
    printf("%d",ptr[2]);
return 0;
}