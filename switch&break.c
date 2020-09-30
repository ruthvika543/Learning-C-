#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("hi");
        break;
    case 2:
        printf("how are you?");
        break;
    case 3:
        printf("bye");
        break;
    default:
        printf("enter 1 or 2 or 3");
    }

}
