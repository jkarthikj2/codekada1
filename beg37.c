#include<stdio.h>
void main()
{
 int a,b,t;
 printf("\n enter the two numbers:");
 scanf("%d%d",&a,&b);
 if(a!=b)
 {
 t=a;
 a=b;
 b=t;
 }
 printf("after swapping:%d %d",a,b);
 }
 
