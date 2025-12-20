#include<stdio.h>
#include<string.h>
struct emp1{
char name[20];
int salary;
char address[20];
};
int main()
{
    struct emp1 face[10];
    printf("enter the name of harry\n");
    scanf("%s",face[0].name);
    printf("enter the salary of harry\n");
    scanf("%d",&face[0].salary);
    printf("enter the ahike of harry\n");
    scanf("%f",&face[0].address);

 printf("enter the name of kishan\n");
    scanf("%s",face[1].name);
    printf("enter the salary of kishan\n");
    scanf("%d",&face[1].salary);
    printf("enter the ahike of kishan\n");
    scanf("%f",&face[1].address);
    
    printf("enter the name of rohan\n");
    scanf("%s",face[2].name);
    printf("enter the salary of rohan\n");
    scanf("%d",&face[2].salary);
    printf("enter the ahike of rohan\n");
    scanf("%f",&face[2].address);

    printf("the harry name is %s\n",face[0].name);
    printf("the harry salary is %d\n",face[0].salary);
    printf("the harry ahike is %f\n",face[0].address);

    printf("the kishan name is %s\n",face[1].name);
    printf("the kishan salary is %d\n",face[1].salary);
    printf("the kishan ahike is %f\n",face[1].address);  

    printf("the rohan name is %s\n",face[2].name);
    printf("the rohan salary is %d\n",face[2].salary);
    printf("the rohan ahike is %f\n",face[2].address);

    return 0;

}