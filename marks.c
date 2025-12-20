#include<stdio.h>
int main(){
    int marks[5];
    int result;
  
    for(int i=0;i<5;i++){
        printf("enter the marks of %d:\n",i+1);
        
        result=scanf("%d",&marks[i]);

if(result!=1){
    printf("ivalid input\n");
    return 1;
}
    }
    for(int i=0;i<5;i++){
      
        printf("the marks of subject %d is %d\n",i+1,marks[i]);
   
    }
    return 0;
    
}