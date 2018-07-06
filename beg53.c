#include<stdio.h>
#include<conio.h>
void main()
{
 int n,n1,r=0,s=0;
 scanf("%d",&n);
 n1=n;
 while(n1!=0)
 { r=n1%10;
   s=s+r;
   n1=n1/10;
 }
   printf("\n %d",s);
 getch();
 }
