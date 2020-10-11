#include <stdio.h>
int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}

void update(int *x,int *y)
{
  int str;
  str=*x;
  *x=str+*y;
  if (str>*y)
  *y=str-*y;
  else if (str<*y)
  *y=*y-str;
  else
  *y=0;
}
