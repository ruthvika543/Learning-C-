#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=max_of_three(a,b,c);
    printf("%d is the greatest",max);
    return 0;
}
int max_of_three(int p, int q, int r)
{
    if (p>q)
    {
        if (p>r)
        return p;
        else
        return r;
    }
    else
    {
        if (q>r)
        return q;
        else
        return r;
    }
}
