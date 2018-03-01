#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,x,i,count=0;
    scanf("%d %d",&n,&x);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==x)
        {
            printf("%d",i);
            break;
        }    
    }
    if(i==n)
        printf("-1");
}