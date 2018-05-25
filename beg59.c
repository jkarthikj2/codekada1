#include <stdio.h>

void main()
{
    int a[10],i,b;
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    b=a[0];
    for(i=1;i<10;i++)
    {
    if(b<a[i])
    b=a[i];
    else
    b=b;
    }
    printf("\n max is:%d",b);
}
