#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("enter the integer:");
    scanf("%d",&n);
    ptr=(int *) calloc(n , sizeof(int));
    ptr[0]=42;
     ptr[1]=43;
      ptr[2]=44;
       ptr[3]=45;
       printf("%d",ptr[1]);
       free(ptr);
       return 0;
}