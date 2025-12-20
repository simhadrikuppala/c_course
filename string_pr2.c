#include<stdio.h>
#include<string.h>
int main(){
    char str[6];
    printf("the stringis ");
    for(int i=0;i<5;i++){
        scanf("%c",&str[i]);
        fflush(stdin);

    } str[5]='\0';
    printf("the string is:%s\n",str);
    return 0;
}