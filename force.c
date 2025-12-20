#include<stdio.h>
#define GRAVITY_EARTH 9.8
float m(float f);
int main(){ float f=4646,mass=55;
printf("enter the %fkg of mass is:",f, mass);
   return 0;
}
float m(float f){
    f=GRAVITY_EARTH * f;
    return f; 
}
