/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int max=max_of_four(a,b,c,d);
    printf("%d is the greatest number",max);
    return 0;
}

int max_of_four(int p, int q, int r, int s)
{
    if(p>q)    
    {
        if(p>r)
        {
            if(p>s)
            return p;
            else
            return s;
        }
    
        else
        {
            if(r>s)
            return r;
            else
            return s;
        }
        
    }
    else
    {
       if(q>r)
       {
           if(q>s)
           return q;
           else
           return s;
       }
       else
       {
           if(r>s)
           return r;
           else
           return s;
       }
    }
}   
