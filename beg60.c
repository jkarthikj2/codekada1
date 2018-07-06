#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i,s=0;
   printf("\n enter the number");
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       s=s+i;
   }
  printf("\n %d",s);
  getch();
}
