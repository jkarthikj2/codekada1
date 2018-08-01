#include<stdio.h>
#include<conio.h>
void main()
{
int i,c,t=0;
char s[100];
gets(s);
c=strlen(s);
for(i=0;i<c;i++)
{
 if(s[i]!=48&&s[i]!=49)
 {t=1;break;}
 else
 continue;
}
if(t==1)
printf("NO");
else
printf("YES");
}
