#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0,n;
	char str[100];
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]=='-')
		str[i]=str[i++];
		
		  
	}
	printf("The altered string is:%s",str);
	
	return 0;
}
