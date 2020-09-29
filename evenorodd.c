#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num==0)
    printf("%d is neither even nor odd",num);
    else
    {
        if(num%2==0)
        printf("%d is even",num);
        else
        printf("%d is odd",num);
    }
    return 0;
}
