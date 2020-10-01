#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    int*ptr=&a;
    int*ptr1=&b;
    printf("%d\n",*ptr);
    printf("%d\n",&ptr1);
    printf("%d\n",ptr1);
    printf("%d\n",*ptr1);
    printf("%d\n",++*ptr);
    printf("%d\n",(*ptr)++);
    printf("%d\n",a++);
    printf("%d\n",++a);
}
