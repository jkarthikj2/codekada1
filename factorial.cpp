#include<iostream>
using namespace std;
void main()
{
int i,n,fact=1;
clrscr();
cout<<"enter the number:";
cin>>n;
if(n<=20)
{
for(i=0;i<n;i++)
{
fact=fact*i;
cout<<"the factorial of the"<<n<<"is:"<<fact;
}
}
else
  cout<<"ERROR:please enter the any number between 0-20.";
}


