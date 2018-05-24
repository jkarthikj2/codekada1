#include<stdio.h>
void main()
{
 char str[100];
 int i,j,c1;
 scanf("%s",&str[20]);
 for(i=0;i<10;i++)
 {
    if((str[i]>='a'&&str[i]<='z')||(str[i]>='0'&&str[i]<='9'))
    { 
       c1=1;
    }
    else
    {c1=0;
    }
 }
 if(c1==1)
  printf("\n yes");
  else
  printf("\n NO");
}
