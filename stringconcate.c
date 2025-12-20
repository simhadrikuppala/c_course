#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="hello world ";
    char str1[]="goodmorning";
    strcat(str,str1);
    printf("the concatination of str and str1 is :%s\n",str);
    return 0;
    
}