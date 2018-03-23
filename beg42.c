#include<stdio.h>
#include<string.h>
void main()
{
 int n1,n2;
 char s1[100],s2[100];
 printf("\n enter two strings:");
 scanf("%s%s",s1,s2);
 n1=strlen(s1);
 n2=strlen(s2);
 if(n1>n2)
 printf("\n the greatest string is:%s",s1);
 else
 printf("\n the greatest string is:%s",s2);
 }
 
