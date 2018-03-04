#include<stdio.h>
#include <stdlib.h>
int main()
{
    char s[100],vowel[]={'a','e','i','o','u'};
    int count[5]={0};
    fgets(s,100,stdin);
    for(int i=0;i<strlen(s);i++)
    {
        if(tolower(s[i])=='a')
        {
            count[0]++;
        }    
        if(tolower(s[i])=='e')
        {
            count[1]++;
        }
        if(tolower(s[i])=='i')
        {
            count[2]++;
        }
        if(tolower(s[i])=='o')
        {
            count[3]++;
        }
        if(tolower(s[i])=='u')
        {
            count[4]++;
        }
    }
    for(int i=0;i<5;i++)
    {
        if(count[i]!=0)
        {
            printf("%c --> %d\n",vowel[i],count[i]);
        }
    }
}
