#include<stdio.h>
#include<string.h>
struct emp1{
char name[20];
int salary;
char address[20];
};
int main()
{
    struct emp1 harry,kishan,rohan;
    printf("enter the name of harry\n");
    scanf("%s",harry.name);
    printf("enter the salary of harry\n");
    scanf("%d",&harry.salary);
    printf("enter the ahike of harry\n");
    scanf("%f",&harry.address);

 printf("enter the name of kishan\n");
    scanf("%s",kishan.name);
    printf("enter the salary of kishan\n");
    scanf("%d",&kishan.salary);
    printf("enter the ahike of kishan\n");
    scanf("%f",&kishan.address);



 printf("enter the name of rohan\n");
    scanf("%s",rohan.name);
    printf("enter the salary of rohan\n");
    scanf("%d",&rohan.salary);
    printf("enter the ahike of rohan\n");
    scanf("%f",&rohan.address);

    printf("the harry name is %s\n",harry.name);
    printf("the harry salary is %d\n",harry.salary);
    printf("the harry ahike is %f\n",harry.address);

    printf("the kishan name is %s\n",kishan.name);
    printf("the kishan salary is %d\n",kishan.salary);
    printf("the kishan ahike is %f\n",kishan.address);

    printf("the rohan name is %s\n",rohan.name);
    printf("the rohan salary is %d\n",rohan.salary);
    printf("the rohan ahike is %f\n",rohan.address);

    return 0;

}