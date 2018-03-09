#include <stdio.h>
int main()
{
    int a,b,i,l=1;
    printf("\n enter the a&b values:");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a&&i<=b;++i)
    {
        if(a%i==0&&b%i==0)
        {
        if(i>l)
            l= i;
        }
    }
    printf("%d",l);
    return 0;
}
