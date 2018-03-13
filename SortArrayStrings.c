#include<stdio.h>
#include <stdlib.h>
int main()
{
    char s[100][100],s1[100];
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((strlen(s[i])==strlen(s[j]))&&strcmp(s[i],s[j])>0||strlen(s[i])>strlen(s[j]))
            {
                strcpy(s1,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],s1);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s ",s[i]);
    }
}
