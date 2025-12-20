#include<stdio.h>
#include<string.h>
struct emp1{
 char name[20]; 
    int salary;
    float hike[20];
};
int main(){
    struct emp1 harry={"harry",45000,7.5};
    printf("the harry name is %s\n",harry.name);
    printf("the harry salary is %d\n ",harry.salary);
    printf("the harry hike is %f\n",harry.hike);
}