#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("sample file.txt","r");
    char ch;
    fscanf(ptr,"%c",&ch);
    printf("the character of the file is %c",ch);
    fclose(ptr);
    return 0;
}