#include <stdio.h>

int main()
{
    char var;
    scanf("%c",&var);
    if ((var>='a'&&var<='z')||(var>='A'&&var<='Z'))
        printf("%c is a character",var);
    else
        printf("%c is not a character",var);
    return 0;
}
