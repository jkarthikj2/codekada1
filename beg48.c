#include<stdio.h>
#include<math.h>
void main()
{
  char a[50];
  int i,s,j,sum=0;
  float avg;
  scanf("%d",&s);
  for(i=0;i<s;i++)
  {
    scanf("%d",&a[i]);
  } 
  for(i=0;i<s;i++)
  {
    sum=sum+a[i];
  }
  avg=(sum/s);
  printf("\n avg is:%f",avg);
}
 
