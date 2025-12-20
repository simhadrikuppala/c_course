#include<stdio.h>
int count(int* arr,int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count++;

        }
    }
 return count;
}
    
    void display(int* arr,int n){
        int i;
        printf("array: ");
        for(i=0;i<n;i++)
        {

            printf("%d",arr[i]);

        }printf("\n");
       
    }
int main()
{
    int arr[]={-5,-4,-3,-2,-1,0,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n);
  printf("the number of elements in the array is %d\n",count(arr,n));
  
    return 0;


}