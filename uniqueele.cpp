#include<iostream>
using namespace std;
void main()
{
    int i,s[100000],j,n,c=0,swpd,temp;
    cout<<"how many elements\n";
    cin>>s;
    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n-1;i++)
    {
        swpd=0;
        for(j=0;j<n-i-1;j++)
        {
            if(s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                swpd=1;
            }
        }
     if(swpd==0)
        break;
   }
    for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                cout<<s[i];
                c=c+1;
                }
            }
        }
    if(c==0)
    {
    printf("unique");
    }
    }
