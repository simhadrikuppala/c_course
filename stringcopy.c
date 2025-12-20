#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="harry";
    char target[20];
    strcpy(target,str);
    printf("the string is:%s\n",str);
    printf("the copy of the string is:%s\n",target);
    return 0;
}