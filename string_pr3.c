#include<stdio.h>
#include<string.h>
int mystrlen(char* n){
    int length=0;
    char * ptn=n;
    while(*ptn!='\0'){
        ptn++;
        length++;
    }return length;
}
int main()
{
    char n[]="hello";

printf("the length of string is %d\n",mystrlen(n));
return 0;

}