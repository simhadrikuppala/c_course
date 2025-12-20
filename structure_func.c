#include<stdio.h>
#include<string.h>
struct emp1{
char name[20];
int salary;
char address[20];
};
void show(struct emp1 e){
    printf("the name of the emp1 is%s\n",e.name);
    printf("the salary of the emp1 is %d\n",e.salary);
    printf("the address of the emp1 is %s\n",e.address);
    e.salary =2;
}
int main(){
struct emp1 rahul={"rahul",55000,"pune"};
show(rahul);
printf("the name of emp1 is %s\n",rahul.name);
printf("the salary of emp1 is %d\n",rahul.salary);
printf("the address of emp1 is %s\n",rahul.address);
return 0;
}