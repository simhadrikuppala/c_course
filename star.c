#include<conio.h>
#include<stdio.h>
void star(int );

int main()
{
star(4);
return 0;
}
void star(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
}