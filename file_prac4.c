#include<stdio.h>
int main()
{
    FILE *ptr;
    int i;
    ptr=fopen("writefile.txt","r");
    fscanf(ptr,"%d",&i);
    ptr=fopen("writefile.txt","w");
    fprintf(ptr,"%d",i*2);
    fclose(ptr);
    return 0;
    

}