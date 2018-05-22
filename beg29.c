#include<stdio.h>
#include<conio.h>
void main()
{
 int h,m,mn;
 printf("\n enter the minutes:");
 scanf("%d",&mn);
 h=mn/60;
 m=mn%60;
 printf("\n the time is:%d hours:%d minutes",h,m); 
 getch();
 };
