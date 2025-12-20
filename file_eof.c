#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("putfile.txt","r");
    char ch;
    while(ch!=EOF)
    {
        ch=fgetc(ptr);
        if(ch!=EOF){
        printf("the value of ch is %c",ch);
        fclose(ptr);
    }}
    return 0;
}