#include <iostream>
#include<string.h>
using namespace std;
int main()
{
int a1,a2,max=0,i,n;	
char a[100],b[100];
cout<<"enter no of strings";
cin>>n;
cout<<"Enter the first string:"<<endl;
cin>>a;
cout<<"Enter the second string: "<<endl;
cin>>b;
a1=strlen(a);
a2=strlen(b);
if(a1>a2)
{
max=a1;	
}
else	
{
max=a2;	
}
for(i=0;i<max;i++)	
{
if(a[i]==b[i])		
{
cout<<a[i];		
}
else		
{	
break;		
}	
}	
return 0;
}
