#include <stdio.h>

int main()

{
    int num1,num2,a;
    scanf("%d %d",&num1, &num2);
    a=num1;
    num1=num2;
    num2=a;
    printf("%d is num1\n",num1);
    printf("%d is num2",num2);
    return 0;
    
}
