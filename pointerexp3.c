#include<stdio.h>
#include<conio.h>
void fun(int* );
int main(){
    int i=2;
    printf("before changing the value of a variable at ten times %d\n",i);
    fun(&i);
    printf("after changing the value of a variable at ten times %d\n",i);
    return 0;

}
void fun(int * a){
    *a=(*a)*10;
}