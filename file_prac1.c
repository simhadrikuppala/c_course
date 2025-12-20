#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("threeintgers.txt","r");
   int i;
    fscanf(ptr,"%d",&i);
    printf("the character of file is%d",i);
    fclose(ptr);
    return 0;
}