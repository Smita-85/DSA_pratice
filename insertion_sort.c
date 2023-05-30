#include<Stdio.h>
int main()
{
    int arr[30],size,i,j,temp;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++)
    {
      temp=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      arr[j+1]=temp;
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}