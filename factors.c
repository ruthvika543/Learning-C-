#include<stdio.h>
#include<math.h>
int main()
{
   int num,remainder;
   scanf("%d",&num);
   for (int i=1;i<=num;i++)
    {
   if (num%i==0)
    printf("%d\n",i);
    }
   return 0;
}
