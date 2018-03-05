#include<iostream>
using namespace std;
void main()
{
    int n,revnum=0,rem;
    cout<<"Enter an integer:";
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
        revnum=revnum*10+rem;
        n/=10;
}
cout<<"Reversed Number="<<revnum;
}
