#include<stdio.h>
int main()
{
    char name1[15];
    int salary1;

    char name2[15];
    int salary2;

    FILE *ptr;
    printf("enter the name1\n");
    scanf("%s",&name1);
    printf("enter the salary1\n");
    scanf("%d",&salary1);

    printf("enter the name2\n");
    scanf("%s",&name2);
    printf("enter the salary2\n");
    scanf("%d",&salary2);

    ptr=fopen("q6.txt","w");
    fprintf(ptr,"%s,%d\n",name1,salary1);
     fprintf(ptr,"%s,%d\n",name2,salary2);
    
    return 0;

}