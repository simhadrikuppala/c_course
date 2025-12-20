#include<stdio.h>
float c2f(float c);
int main(){
    float c=37.0,f=c2f(c);
    printf("the value of %f degree in farenheat is %f  : ",c,f);
    return 0;
}
float c2f(float c){
    float f=(c*9.0/5.0)+32.0;
    return f;
}