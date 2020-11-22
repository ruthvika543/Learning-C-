#include<stdio.h>

int main()
{
    int a[10],i,j,n,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i<n-2; i>=0; i--)
    {
        for (j=0; j<n; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("The sorted elements are");
      {
          for(i=0;i<n;i++)
          printf(" %d",a[i]);
      }

   return 0;
   }

