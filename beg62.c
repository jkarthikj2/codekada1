#include<stdio.h>
void main()
{int c=0;
    char a[10];
    scanf("%s",&a[5]);
    for(int i=0;a[i]<5;i++)
    {
        if(a[i]>=0&&a[i]<2)
        c++;
        else
        c=0;
    }
    if(c==0)
    printf("no");
    else
    printf("yes");
    
}
