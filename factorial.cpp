#include<iostream.h>
#include<conio.h>
void main()
{
int i,n,fact=1;
clrscr();
cout<<"enter the number:";
cin>>n;
for(i=0;i<n;i++)
fact=fact*i;
cout<<"the factorial of the"<<n<<"is:"<<fact;
getch();
}
