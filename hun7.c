#include<stdio.h>
int main()
{
int n,i,count=0,j,k;
char c[100],t;
scanf("%[^\n]s",&c);
for(i=0;c[i]!='\0';i++)
{
count++;
}
for(i=0;i<count;i++)
{
if(i%2!=0)
{
t=c[i];
c[i]=c[i-1];
c[i-1]=t;
}
}
printf("%s",c);
return 0;
}
