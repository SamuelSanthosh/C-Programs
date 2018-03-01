#include<stdio.h>
#include <stdlib.h>
int main()
{
    long int n;
    int x,a[10],i;
    scanf("%ld %d",&n,&x);
    while(n>0)
    {
        a[i++]=n%10;
        n/=10;
    }
    for(int j=x-1;j>=0;j--)
        printf("%d",a[j]);
    for(int j=i-1;j>=x;j--)
        printf("%d",a[j]);
}
