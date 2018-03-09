#include <stdio.h>
int main()
{
    int x1,x2,y1,y2,z1,z2;
    printf("\n enter the values:");
    scanf("%d%d%d%d%d%d",&x1,&x2,&y1,&y2,&z1,&z2);
    if(x1==y1&&y1==z1)
    printf("YES");
    else
    printf("NO");
    return 0;
}
