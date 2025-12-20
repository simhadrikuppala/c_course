#include<stdio.h>
typedef struct twodvector{
    int x;
    int y;

}vector;
int main(){
   vector v1={2,3};
   vector v2={12,13};
printf("%di + %dj",v1.x,v2.y);
return 0;
}