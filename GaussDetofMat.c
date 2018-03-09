#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    float fact,det=1,a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            fact=a[i][j]/a[j][j];
            for(k=0;k<n;k++)
            {
                a[i][k]=a[i][k]-fact*a[j][k];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        det*=a[i][i];
    }
    printf("%d",(int)det);
}
