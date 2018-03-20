#include<stdio.h>
int main()
{
	int n,b,i=0,j,a[100];
	scanf("%d %d",&n,&b);
	while(n>0)
	{
		a[i++]=n%b;
		n/=b;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}
