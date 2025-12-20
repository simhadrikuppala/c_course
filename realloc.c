#include<stdio.h>
#include<stdlib.h>
int main()
{
    int * ptr;
    int n=6;
    ptr=(int *) malloc(n* sizeof(int));
    
    ptr=realloc(ptr,30*sizeof(int));
    return 0;
}
