#include<stdio.h>

int main()
{
    int num,sum;
    scanf("%d",&num);
    sum=0;
    for (int i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("%d is the sum",sum);
  return 0;
}
