#include<stdio.h>

int main()
{
  int num,i,remainder,count=0;
  scanf("%d",&num);
  remainder=0;
 for (i=2;i<num;i++)
 {
     remainder=num%i;
     if(remainder==0)
        count=count;
     else
        count++;
 }
  if (count==(num-2))
    printf("%d is a prime number",num);
  else
    printf("%d is not a prime number",num);

  return 0;
}
