#include<conio.h>
#include<stdio.h>
int main ()
{
    int i;
    while (i<=4)
    {
        if(i==3)
        {
            i++;
            continue;
        }
        printf("the value of i is %d\n",i);
        i++;
    }
    return 0;
}