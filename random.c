#include<stdlib.h>
#include<time.h>
#include<stdio.h>
int main()
{
    int number;
    srand(time(0));
    number=rand()%100+1;
    printf("the random number is %d ",number);
return 0;
}