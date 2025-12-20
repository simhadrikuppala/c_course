#include<stdio.h>
#include<conio.h>
void fun(int *);
int main(){
    int i=5;
    fun(&i);
    printf("the address of i is%u\n",&i);

return 0;
}
void fun(int * p){
    printf("the address of p is %u\n",p);

}


