#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[10],freq[10],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1,freq[i]=1;j<n;j++)
        {
            if(a[i]==a[j]&&a[j]!=-1)
            {
                freq[i]++;
                a[j]=-1;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=-1)
        {
            printf("%d --> %d\n",a[i],freq[i]);
        }
    }
}
