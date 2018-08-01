#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
scanf("%d",&a);
for(i=1;a%10!=0;i++)
a=a+1;
printf("%d",a);
}
