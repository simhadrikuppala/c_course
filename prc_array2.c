#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
for(int i=0;i<=10;i++)
{
    a[i]=5*i;
    printf("the value of 5 x %d is %d\n:",i,a[i]);   

}
return 0;
}
