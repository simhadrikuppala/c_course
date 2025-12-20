#include<stdio.h>
double average(int,int,int);
int main(){
    printf("the average of 1, 4and 3 is %lf",average(1,3,4));
    return 0;
}
double average(int a,int b,int c)
{ return (a+b+c)/3.0;


}