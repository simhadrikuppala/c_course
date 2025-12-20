#include<stdio.h>
#include<conio.h>
int main()
{

    int i=22;
    int j=1308620520;
    printf("the value of i and j is %uand %u\n",&i,&j);
        printf("the value of i and j is %dand %d\n",*(&j));

    return 0;
    
}