#include<stdio.h>
int main(){
    int marks[5]={1,2,3,4,5};
    //&marks =>marks
   
    int *ptr=marks;
    *ptr=20;
    *ptr++;
*ptr=30;
*++ptr;
*ptr=40;
    *ptr++;
    printf("the marks of 0th subject %d \n",marks[0]);
 printf("the marks of 1st subject %d \n",marks[1]); printf("the marks of 2nd subject %d \n",marks[2]);
 printf("the marks of 1st subject %d \n",marks[3]); printf("the marks of 2nd subject %d \n",marks[4]);
return 0;


}

