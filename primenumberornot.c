#include<stdio.h>

int main()
{
  int num,i,answer;
  scanf("%d",&num);
  for (i=0;i<=num;i++)
  {
      answer=num%i;
  }
  if (answer==0)
    printf("%d is a prime number",num);
  else
    printf("%d is not a prime number"num);
  return 0;
}
