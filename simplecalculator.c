#include<stdio.h>
#include<math.h>
int main()
{
   int num1,num2,answer;
   char a;
   scanf("%d %c %d",&num1,&a,&num2);
   switch(a)
   {
      case '+':
          answer=num1+num2;
          printf("%d is the sum of two numbers",answer);
          break;
      case '-':
          answer=num1-num2;
          printf("%d is the difference of two numbers",answer);
          break;
      case '*':
          answer=num1*num2;
          printf("%d is the multiplication of two numbers",answer);
          break;
      case '/':
          answer=num1/num2;
          printf("%d is the division of two numbers",answer);
          break;
      default:
          printf("please choose valid operation");
   }
   return 0;
}
