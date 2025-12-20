#include<stdio.h>
#include<string.h>
struct emp1{
char name[20];
int salary;
char address[20];
};
struct emp2{
char name[20];
int salary;
char address[20];
};
struct emp3{
char name[20];
int salary;
char address[20];
};
int main(){
struct emp1 a;
strcpy(a.name,"harry");
a.salary=45000;
strcpy(a.address,"delhi");
printf("\nthe name of the emp1 is %s\n",a.name);
printf("the salary of the emp1 is %d\n",a.salary);
printf("the address of the emp1 is %s\n\n",a.address);

struct emp2 b;
strcpy(b.name,"cherry");
b.salary=45000;
strcpy(b.address,"delhi");
printf("the name of the emp2 is %s\n",b.name);
printf("the salary of the emp2 is %d\n",b.salary);
printf("the address of the emp2 is %s\n\n",b.address);

struct emp3 d;
strcpy(d.name,"marry");
d.salary=45000;
strcpy(d.address,"delhi");
printf("the name of the emp3 is %s\n",d.name);
printf("the salary of the emp3 is %d\n",d.salary);
printf("the address of the emp3 is %s\n\n",d.address);


    return 0;

}