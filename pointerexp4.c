#include<stdio.h>
#include<conio.h>
int sum(int,int);
double avg(int,int);
int main(){
    int i=2;
    int j=4;
    printf("the sum of i and j is %d \n",sum(i,j));
    printf("the avg of i and j is %d \n",avg(i,j));
    return 0;
}
int sum(int i,int j){
    int k;
    k=i+j;
    return k;
}
double avg(int i,int j){
    return i+j/2.0;
}