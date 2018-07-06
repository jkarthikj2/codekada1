#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,c=0;
 char s[20];
 gets(s);
 scanf("%d",&n);
 for(i=0;s[i]!=0;i++)
 { c++;
 }
 for(i=0;i<n;i++)
 printf("%c",s[i]);
 getch();
 }
