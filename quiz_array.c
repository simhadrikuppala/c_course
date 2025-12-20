#include<stdio.h>
int main(){ 
    int i=5;
    int *ptr=&i;
    printf("the  value of i is %d\n",i);
    printf("the value of *ptr %u\n",ptr);
    printf("the address of i is %d\n",&i);
    ptr=ptr  + 2;
    printf("the value of ptr after ptr is incremented is %u\n",ptr);
    printf("the value of ptr after ptr is incremented is %u\n",ptr -&i);
    if(ptr>=&i){
        printf("ptr is greater");

    }else{
        printf("ptr is smaller");
    }

    return 0;
}