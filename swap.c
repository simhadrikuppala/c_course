#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main(){
    int a=5;
    int b=7;
    printf("the value of a and b before swap is : %d and %d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after swap is %d and %d",a,b );
    return 0;
}
 
    void swap(int* a,int* b)
    {
       // printf("the value of a and b before swap is : %d and %d\n",a,b);
        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
         //printf("the value of a and b after swap is %d and %d",a,b );
    }
   
