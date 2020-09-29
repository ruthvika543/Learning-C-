#include <stdio.h>

int main()
{
    char var;
    scanf("%c",&var);
    if((var>='a'&&var<='z')||(var>='A'&&var<='Z'))
    {
    if(var=='a'||var=='e'||var=='i'||var=='o'||var=='u'||var=='A'||var=='E'||var=='I'||var=='O'||var=='U')
    printf("%c is a vowel",var);
    else
    printf("%c is a consonant",var);
    }
    else
    printf("enter a valid charater");
    return 0;
}
