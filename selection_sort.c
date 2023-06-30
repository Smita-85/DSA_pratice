/*SELECTION SORT*/
#include<stdio.h>
void selection_sort(int[],int);
int main()
{
    int arr[30],size;
    printf("enter array size:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,size);
    return 0;
}
void selection_sort(int arr[],int size)
{
    int min,i,temp,j;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}