#include<stdio.h>
#include<string.h>
typedef struct vector{
    char name[20];
    int salary;
    char address[20];
}
vector;

int main(){
    vector emp1;
    strcpy(emp1.name,"kk");
    vector *ptr=&emp1;
    emp1.salary=45000;
    strcpy(emp1.address,"ipune");
    printf("the name of emp1 is%s\n",ptr->name);
    printf("the salary of emp1 is %d\n ",ptr->salary);
    printf("the address of emp1 is %s\n",ptr->address);
    return 0;

}