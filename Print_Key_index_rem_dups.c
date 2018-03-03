#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[10],dup[10],b[10][10],i,j,c=0,l,k1=0,k=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(l=0;l<c;l++)
        {
            if(dup[l]==a[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            dup[c++]=a[i];
            printf("%d ",a[i]);
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    b[k1][k++]=j;
                    printf("%d ",b[k1][k-1]);
                }
            }
            k1++;
            k=0;
            printf("\n");
        }
        flag=0;
    }
}
