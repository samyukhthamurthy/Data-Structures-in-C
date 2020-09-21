#include<stdio.h>
int binsearch(int arr[],int beg,int end, int x)
{
     while(beg<end)
      {   int mid=(beg+end)/2;
          if(arr[mid]==x)
           return mid;
          else if(arr[mid]<x)
            beg=mid+1;
          else
            end=mid-1;
      }
      return -1;
}
int main()
{
    int arr[10],n,x,i;
    printf("Enter size:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element of your choice:");
    scanf("%d",&x);
    int result = binsearch(arr, 0, n-1, x);
    if(result == -1)
        printf("Element not present in the array.");
    else
        printf("Element present at:%d",result);
    return 0;
}

