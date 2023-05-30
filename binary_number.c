#include<stdio.h>
int binary(int [],int,int);
int main()
{
    int arr[30],size,item,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search:");
    scanf("%d",&item);
    binary(arr,size,item);
    return 0;
}
int binary(int arr[],int size,int item)
{
    int start=0,i;
    int end=size-1;
    while(start<=end)
    {
       int mid=start+end/2;
       if(arr[mid]==item)
       {
        printf("element exist at posn %d",mid);
        break;
       }
       if(item>arr[mid])
       {
        start=mid+1;
       }
       else{
        end=mid-1;
        i=0;
       }
    }
    if(i==0)
    {
        printf("element not found");
    }
}