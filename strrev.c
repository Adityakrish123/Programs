#include <stdio.h>
#include <string.h>
int main()
{
	int n,j,i,l;
	char str[100];
	printf("Enter the string to be reversed:\n",str);
	gets(str);
	n=strlen(str);
	char str1[n];
	l=n-1;
	printf("the lenght of the given arry is :%d\n",n);
	 for(i=0;i<n;i++)
	 	if(str[i]!='!')
	 	 {
	 	while(str[l]=='!')
		 {
	 		l--;
		 }
		 str1[i]=str[l];
		 l--;
	    }
		 else
		 {
		 	str1[i]='!';
		 }
		 for(i=0;i<n;i++)
		   {
     	   printf("%c",str1[i]);
         }
	return 0;
}

