#include<stdio.h>
int main(){
    char ch1[50];
    printf("enter the name :\n");
    fgets(ch1,50,stdin);
    //printf("%s\n",ch1);
    puts(ch1);
    printf("done printing");
    return 0;
}