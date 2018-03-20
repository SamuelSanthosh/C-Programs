#include<stdio.h>
#include <stdlib.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,count=0;
    for(i=0;i<strlen(s);i++)
    {
        count=1;
        while(s[i]==s[i+1])
        {
            i++;
            count++;
        }
        printf("%c",s[i]);
        if(count>1)
        {
            printf("%d",count);
        }
    }
}
