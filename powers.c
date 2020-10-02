#include<stdio.h>
int main()
{
 int num,power;
 scanf("%d %d",&num,&power);
 int answer=num;
 for (int i=1; i<=power; i++)
 {
     answer=answer*num;
 }

  printf("%d",answer);
  return 0;
}
