#include <stdio.h>
#include<string.h>
int main()
{
char str[30];
int i=0,count=0;
printf("enter the strings:");
scanf("%[^\n]s",&str);
while(str[i]!='\0')
{
if(!(str[i]==32))
{
++count;
}
++i;
}
printf("no of characters is: %d ",count);
    return 0;
}
