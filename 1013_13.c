#include <stdio.h>
int main ()
{
    int a,b;
    for(a=1;a<=4;a++)
    {
        for(b=1;b<=4-a;b++)
        {
            printf(" ");
        }
        for(b=1;b<=2*a-1;b++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0 ;
}