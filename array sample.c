#include<stdio.h>
int main(){
    float marks[3]={33.4,33.5,66.7};
    for(int i=0;i<3;i++){
        printf("the marks scored by the student in subject %f\n",i+1,marks[i]);
        return 0;
    }
}