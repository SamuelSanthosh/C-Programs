#include<stdio.h>
#include <stdlib.h>
int isPalindrome(int n)
{
    int num=n,rev,sum=0;
    while(n>0)
    {
        rev=n%10;
        sum=sum*10+rev;
        n/=10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int next=n+1;
    while(1)
    {
        if(isPalindrome(next))
        {
            printf("%d",next);
            flag=1;
        }
        else
            next++;
        if(flag==1)
            break;
    }
}
