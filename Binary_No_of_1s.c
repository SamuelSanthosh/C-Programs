#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N,count=0;
    scanf("%d",&N);
    while(N>0)
    {
        if(N%2==1)
            count++;
        N/=2;    
        
    }
    printf("%d",count);

}