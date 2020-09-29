#include<stdio.h>
int main()
{
    int num,result;
    scanf("%d",&num);
    result=factorial(num);
    printf("%d",result);
    return 0;
}
int factorial( int num1)
{ int answer=num1;
    for (int i=num1-1; i>0; i--)
    {
        answer=answer*i;
    }
    return answer;
}
