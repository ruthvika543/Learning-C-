#include<stdio.h>
int main()
{
 int num,count=0;
 scanf("%d",&num);
 int str;
 str=num;
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
 for (int j=0;j<=(count-1);j++)
 {
     printf("%d",rev[j]);
 }
 return 0;
}


