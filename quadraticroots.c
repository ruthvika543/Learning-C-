#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float r1,r2,y,disc;
    scanf("%d %d %d",&a,&b,&c);
    y=sqrt(b*b-(4*a*c));
    disc=(b*b)-(4*a*c);
    r1=(-b+y)/(2*a);
    r2=(-b-y)/(2*a);
if (disc<0)
    printf("roots are imaginary");
else
   {
    printf("%f is the first root\n",r1);
    printf("%f is the second root",r2);
   }
return 0;
}
