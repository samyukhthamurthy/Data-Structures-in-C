#include <stdio.h>

int main()
{
 int arr[10],x,y=0,n,i;
scanf("Enter size:%d",&n);
printf("Enter the elements:");
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);
}
scanf("Enter an element to search in the list:%d",&x);
for(i=0;i<n;i++)
{if(arr[i]==x)
 {y=1;
  printf("Element:",x," was found at position:",i);
  break;
 }
}
 if(y==0)
 printf("Not found.");
return 0;
}
