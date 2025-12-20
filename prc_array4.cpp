#include<stdio.h>
int reverse(int *a[i],int n);{
for(int i=0;i<n/2;i++)
{
    int temp;
    temp=a[i];
    a[i]=a[n-i-1];
    a[n-i-1]=temp;
}}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);  
    }
}

int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10};
display(arr,10);
reverse(arr,10);
display(arr,10);
return 0;
}