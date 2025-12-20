#include<stdio.h> 
struct complex{
    float r;
    float c;
};
int main(){
    struct complex v1={4.3,5.8};
    struct complex v2={3.4,7.2};
    printf("%fi+ %fj\n",v1.r,v1.c);
    printf("%fi+ %fj\n",v2.r,v2.c);
    return 0;
}
