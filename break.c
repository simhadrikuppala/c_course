#include<conio.h>
#include<stdio.h>
int main ()
{
    int i=1;
    while (i<=4)
    {
        if(i==3)
        {
            break;
        }
        printf("the value of i is %d\n",i);
        i++;
    }
    return 0;
}