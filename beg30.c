#include<stdio.h>
#include<conio.h>
void main()
{
int t,mn,t1,mn1,t2,mn2;
printf("\n enter the 1st hour and minutes:");
scanf("%d",&t1);
scanf("%d",&mn1);
printf("\n enter the 2nd hour and minutes:");
scanf("%d",&t2);
scanf("%d",&mn2);
if((t1!=t2)&&(mn1!=mn2))
{
 if(t1>t2)
 t=t1-t2;
 else
 t=t2-t1;
 if(mn1>mn2)
 mn=mn1-mn2;
 else
 mn=mn2-mn1;
 printf("\n difference of time is:%d H:%d M",t,mn);
 }
 else
 printf("\n !!!The two times or minutes are same!!!");
 };
