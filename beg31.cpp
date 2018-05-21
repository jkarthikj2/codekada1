#include<iostream>
#include<string>
using namespace std;
int main()
{
 char a[100];
 int c,i;
 cout<<"Enter the string";
 gets(a);
 for(i=0;a[i]!=NULL;i++)
 {
  if(a[i]!=' ')
  ++c;
  }
  cout<<"the number of chars in a string"<<c;
  return 0;
  }
