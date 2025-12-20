#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("multiplication.txt","w");
int a=2;int b=2;
int n=a*b;

fprintf(ptr,"%d %d",a,b,n);
for(int i=0;i<=n;i++){
printf("%d*%d=%d",a,b,n);
}
fclose(ptr);
return 0;
}