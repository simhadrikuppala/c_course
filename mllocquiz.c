#include<stdio.h>
#include<stdlib.h>
int main()
{
    float * ptr;
    float n;
    scanf("%f",&n);
    ptr=(float *) malloc(n * sizeof(float));
    ptr[0]=4.33;
    ptr[1]=4.45;
    ptr[2]=4.6;
    ptr[3]=4.7;
    
    printf("%f",ptr[3]);
    return 0;

}