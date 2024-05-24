#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    scanf("%s", s);
    int n=strlen(s);
    int h=n/2,i,j;
    for(i=h;i<n;i++)
    {
        printf("%c ", s[i]);
        if(i==n-1)
        {
            j=s[0];
            printf("%c",s[i]);
            j++;
            j==n/2-1;
            break;
        }
    }
}