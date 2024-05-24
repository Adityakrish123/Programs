#include<stdio.h>
#include<string.h>
int main()
{
	int i,j=0;
	char str[100];
	scanf("%s",str);
	printf("Enter the string to corrected:\n");
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]=='-')
		{
			str[i]=str[i+1];
			j++;
			
		}	
	}
	for(i=0;i<strlen(str)-j;i++)
	{
		printf("%",str[i]);
	}
	return 0;
}
