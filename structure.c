#include<stdio.h>
#include<string.h>
struct employee{
    float hike;
    int salary;
    char name[10];
};
int main()
{
    int a=45;
    struct employee harry;
    strcpy(harry.name,"harry");
    harry.hike=5.2;
    harry.salary=45000;
    printf("the name of the employee is %s\n",harry.name);
    printf("the hike of the employee is %f\n",harry.hike);
printf("the salary of employee is %d",harry.salary);
return 0;

}