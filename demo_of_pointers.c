#include<stdio.h>
int main(){
    int i=8;
    int *j;
    j=&i;
    printf("add i=%u\n",&i);
     printf("add i=%u\n",j);
     printf("add i=%u\n",&j);
      printf("add i=%d\n",i);
       printf("add i=%d\n",*(&i));
        printf("add i=%d\n",*j);
        return 0;

}