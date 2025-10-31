#include<stdio.h>
#include<conio.h>
int main()
{
int marks1,marks2,marks3;
printf("enter marks1:",&marks1);
scanf("%d",&marks1);
printf("enter marks2:",&marks2);
scanf("%d",&marks2);
printf("enter marks3:",&marks3);
scanf("%d",&marks3);
float total=(marks1+marks2+marks3)/3;
if (total>=40)
{
if(marks1<=33||marks2<=33||marks3<=33)
{
    printf("the student has been failed due to less than 33 percent in one subject");
}
else{
    printf("the student has been passed with %.2f percent",total);
}}
else{
    printf("the student has been failed due to less than 40 percent");
}
return 0;
}



