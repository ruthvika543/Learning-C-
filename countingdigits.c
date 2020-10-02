#include<stdio.h>
int main()
{
 long long num;
 scanf("%ll",&num);
 int count=0;
 while (num!=0)
 {
     num=(num/10);
     count++;
 }
 printf("%d",count);
 return 0;
}
