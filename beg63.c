#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j,k,t;
for(i=0;i<10;i++)
scanf("%d",&a[i]);
for(k=0;k<10;k++)
{
for(i=0;i<10;i++)
{
    for(j=i+1;j<10;j++)
    {
       if(a[i]>=a[j])
       {
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       break;
       }
       else
       break;
    }
}}
printf("%d",a[0]);
}
