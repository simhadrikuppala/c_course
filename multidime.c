#include<stdio.h>
int main(){
    int marks[2][4];
    marks[0][0]=34;
    marks[0][1]=45;
    marks[0][2]=35;
    marks[0][3]=38;

    marks[1][0]=31;
    marks[1][1]=46;
    marks[1][2]=37;
    marks[1][3]=39;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }return 0;

}