#include<stdio.h>
int main()
{
    int arr[10],itemtoinsert,n,i,j,k;
    printf("\nEnter array size:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(i=0;i<n;++i)
        scanf("\n%d",&arr[i]);
    for(i=0;i<n;)
    {
        itemtoinsert=arr[i];
        j=i-1;
        while(j>=0)
        {
            if(itemtoinsert<arr[j])
              {
                  arr[j+1]=arr[j];
                  j--;
              }
            else
                break;
        }
        arr[j+1]=itemtoinsert;
        i++;
        for(k=0;k<n;++k)
            printf("%d\t",arr[k]);
        printf("\n");
    }
    printf("\nSorted array:");
    for(i=0;i<n;++i)
        printf("%d",arr[i]);
    return 0;
}
