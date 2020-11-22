#include<stdio.h>

int main()
{
    int a[10],i,n,search;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the elements in the array\n");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to search\n");
    scanf("%d",&search);
    for (i=0; i<n; i++)
    {
        if (a[i]==search)
        {
            printf("The required number is at location %d\n",i++);
            break;
        }
        if (i==n)
        {
            printf("The required number is not present in the array");
        }
    }
    return 0;
}
