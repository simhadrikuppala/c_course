#include<stdio.h>
#include<string.h>
struct emp1{
char name[20];
int salary;
char address[20];
};
int main()
{
  
     struct emp1 harry={"harry",45000,"delhi"};
     struct emp1 *ptr =&harry;
    printf("the harry name is %s\n",harry.name);
    printf("the harry salary is %d\n",harry.salary);
    printf("the harry address is %s\n",harry.address);

    printf("the harry name is %s\n",(*ptr).name);
    printf("the harry salary is %d\n",(*ptr).salary);
    printf("the harry ahike is %f\n",(*ptr).address);

    
    printf("the harry name is %s\n",ptr->name);
    printf("the harry salary is %d\n",ptr->salary);
    printf("the harry ahike is %f\n",ptr->address);

    return 0;

}