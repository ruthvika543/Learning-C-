#include<stdio.h>
int main()
{
 int num,count=0,answer;
 scanf("%d",&num);
 int str;
 str=num;
 answer=num;
 while(num!=0)
 {
     if (num/10>=0)
     {
         num=num/10;
         count++;
     }
 }
 int rev[count];
 for (int i=0;i<count;i++)
 {
     rev[i]=str%10;
     str=str/10;
 }
 int multiplier=1,revd=0;
 for (int j=0;j<=count-1;j++)
 {
     revd=revd+rev[count-1-j]*multiplier;
     multiplier=multiplier*10;
 }
 if (answer==revd)
    printf("%d is a palindrome",answer);
 else
    printf("%d is not a palindrome",answer);
 return 0;
}


