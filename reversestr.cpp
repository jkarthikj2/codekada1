#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[],t;
 int i,j=0;
 clrscr();
 cout<<"Enterthe string :";
 gets(str);  
 i=0;
 j=strlen(str)-1;
  while(i<j)
   {
   t=str[i];
   str[i]=str[j];
   str[j]=t;
   i++;
   j--;
   }
 cout<<"Reverse string is: "<<str;
 getch();
}
