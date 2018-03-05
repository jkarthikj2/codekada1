#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
 char str[],t;
 int i,j;
 clrscr();
 printf("\nEnter a string : ");
 scanf("%s",str);
 printf("\n\nOriginal String: %s",str);
 for(i=0;i<strlen(str);i=i+2)
 {
  t=str[i];
  str[i]=str[i+1];
  str[i+1]=t;
  }
printf("\nAfter Swap String: %s",str);
getch();
}
