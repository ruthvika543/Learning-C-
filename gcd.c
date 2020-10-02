#include<stdio.h>
#include<math.h>
int main()
{
  int num1,num2;
  scanf("%d %d",&num1,&num2);
  int memory1[num1],memory2[num2],count1=0,count2=0;
  for ( int i=1;i<=num1;i++)
  {
      if (num1%i==0)
        {
        memory1[count1]=i;
        count1++;
        }
  }
  for (int j=1;j<=num2;j++)
  {
      if (num2%j==0)
        {
        memory2[count2]=j;
        count2++;
        }
  }
  int answer;
  for (int k=1; k<=count1; k++)
  {
      for (int l=1; l<=count2; l++)
      {
         if (memory1[k-1]==memory2[l-1])
         {
             answer=memory1[k-1];
         }
      }
  }
  printf("%d",answer);

}
