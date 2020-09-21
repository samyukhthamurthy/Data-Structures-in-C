#include<stdio.h>
int main()
{   int arr[10],n,i,j,k,temp,min;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;++i)
    {
       min=i;
       for(j=i+1;j<n;j++)
        {
          if(arr[j]<arr[min])
            {
                min=j;
            }
          if(min!=i)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }
        }
        for(k=0;k<n;k++)
        printf("%d\t",arr[k]);
        printf("\n");
    }
    printf("Sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
