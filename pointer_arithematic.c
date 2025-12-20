#include<stdio.h>
int main(){
    char marks[3]={'a', 'b'};
    char *ptr=&marks[0];
    *ptr++;
    printf("the first mark is %d\n",*ptr);    return 0;
}