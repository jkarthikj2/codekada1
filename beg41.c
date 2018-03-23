#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char s[100];
clrscr();
printf("\n enter the string:");
scanf("%s",s);
printf("\n enter the no of times you want:");
scanf("%d",&n);
if(n!=0)
{
 for(i=1;i<=n;i++)
 {
  printf("\n %s",s);
  }
 }
 else
 printf("\n enter the valid number");
 getch();
 }
