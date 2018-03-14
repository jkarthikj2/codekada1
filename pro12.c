#include<stdio.h>
int main(void)
{
	int a,b,n,k,h[20],temp;
	printf("\n enter the n&k values:");
	scanf("%d%d",&n,&k);
	printf("\n enter the values:");
	for(a=0;a<n;a++)
	{
	scanf("%d",&h[a]);
	}
	for(a=0;a<n;a++)
	{
		for(b=a+1;b<n;b++)
		{
			if(h[a]<h[b])
			{
			temp=h[a];
			h[a]=h[b];
			h[b]=temp;
			}
		}
	}
	printf("%d",h[k-1]);
	return 0;
}
