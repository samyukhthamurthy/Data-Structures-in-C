#include<stdio.h>
void qsort(int a[25],int left,int right)
{
  int pivot,i,j,temp;
  if(left<right)
  {
      i=left+1;
      j=right;
      pivot=left;
      while(i<j)
      {
          while(a[pivot]>=a[i] && (i<right))
            i++;
          while(a[pivot]<a[j])
            j--;
          if(i<j)
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
      temp=a[pivot];
      a[pivot]=a[j];
      a[j]=temp;
      qsort(a,left,j-1);
      qsort(a,j+1,right);
  }
}
int main()
{
    int i,n,a[25];
    printf("\nEnter array size:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    qsort(a,0,n-1);
    printf("\nSorted elements:\n");
    for(i=0;i<n;++i)
        printf("%d ",a[i]);
    return 0;
}
