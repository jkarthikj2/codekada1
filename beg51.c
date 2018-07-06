#include<stdio.h>
#include<conio.h>
void main()
{
 int n,n1,i=1,r=0,s=0;
 scanf("%d",&n);
 n1=n;
 while(n1>=1)
 {   r=n1%10;
     printf("%d",r);
     n1=n1/10;
     i++;
 }
 getch();
 }
