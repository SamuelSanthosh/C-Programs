#include<stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    int  x;
    scanf("%s %d",s,&x);
    int n=strlen(s);
    for(int i=x;i<n;i++)
        printf("%c",s[i]);
    for(int i=0;i<x;i++)
        printf("%c",s[i]);

}