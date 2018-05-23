#include<stdio.h>
#include<string.h>
void main()
{
 char a[10];
 int count=0;
  printf("\n enter the input:");
  gets(a[10]);
  for(int i=0;a[i]!='\0';i++)
  {
   if((a[i]>='0')&&(a[i]<='9'))
   {
    count++;
    }
    }
    printf("\n %d",count);
}
