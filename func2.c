#include<stdio.h>
 int main ()
 {
    int sum(int a,int b)
    {
        int c;
        printf("enter the number:\n");
    scanf("%d%d",&a,&b);
    printf("the value of a is %d and b is %d:\n",a,b);
        c=a+b;
        return c;

    }
    
    printf("the alue of 4+5 is   \n");
    printf("%d",sum(4,5));
    return 0;
}