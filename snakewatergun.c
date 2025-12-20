#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakewatergun(char you,char computer){
    if(you==computer){
        return 0;
    }
    else if(you=='s'&& computer=='w'|| you=='w'&& computer =='g' || you=='g'&& computer=='s'){
        return 1;
    }
    else{
        return -1;
        
    }

}
int main(){
    char you, computer;
    srand(time(0));
    int number=rand()%100+2;
    if(number <33){
        computer='s';

    }
    else if(number<66){
        computer='w';
    }
    else{computer='g';
    }


    printf("Enter 's' for snake, 'w' for water and 'g' for gun: ");
    scanf(" %c", &you);
    int result=snakewatergun(you,computer);
   if(result==0){
    printf("game withdrawn\n");

   }
   else if(result==1){
    printf("you win \n");

   }
   else{
    printf("computer wins\n");

   }







    return 0;
}
