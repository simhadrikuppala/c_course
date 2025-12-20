#include<stdio.h>
struct date{
    int year ,month,day;
};

int main()
{
    struct date today;

    today.year=2015;
    today.month=10;
    today.day=25;
printf("Today's date is %d-%d-%d\n",today.year,today.month,today.day);
    return 0;
}