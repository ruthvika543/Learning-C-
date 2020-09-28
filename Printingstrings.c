
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char a;
char s[100];
char sen[100];
scanf("%c",&a);
scanf("%s",&s);
scanf("\n");
scanf("%[^\n]%*c",&sen);
printf("%c\n",a);
printf("%s\n",s);
puts(sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
