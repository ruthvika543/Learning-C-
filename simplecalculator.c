#include<stdio.h>
#include<math.h>
int main()
{
   int num1,num2,sum,sub,mul,div,a;
   scanf("%d %d %d",&num1,&num2,&a);
   switch(a)
   {
      case 1: sum;
          sum=num1+num2;
          printf("%d is the sum of two numbers",sum);
          break;
      case 2: sub;
          sub=num1-num2;
          printf("%d is the difference of two numbers",sub);
          break;
      case 3: mul;
          mul=num1*num2;
          printf("%d is the multiplication of two numbers",mul);
          break;
      case 4: div;
          div=num1/num2;
          printf("%d is the division of two numbers",div);
          break;
      default:
          printf("please choose valid operation");
   }
   return 0;
}
