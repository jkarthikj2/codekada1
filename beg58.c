#include <stdio.h>

void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("\n %d %d",a,b);
}
void swap(int *x,int *y)
{
  *x=*x^*y;
  *y=*x^*y;
  *x=*x^*y;
}
