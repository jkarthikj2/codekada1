#include<stdio.h>
void main()
{
  char a[50];
  int max,min,i,j,t,t1;
  for(i=0;i<5;i++)
  { scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
      
     for(j=i+1;j<5;j++)
     {
      if(a[i]>a[j])
      {
          min=a[j];
      }
      
  }
  }
   for(i=0;i<5;i++)
  {
      
     for(j=i+1;j<5;j++)
     {
      if(a[i]<a[j])
      {
          max=a[j];
      }
      
  }}
  printf("\n min number is:%d",min);
  printf("\n max number is:%d",max);
}
