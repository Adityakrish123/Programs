#include<stdio.h>
#include<string.h>
int main()
{
	int a,r,sum,temp;
	scanf("%d",&a);
	temp=a;
	
	while(temp!=0)
	{
	r=temp%10;
	temp=temp/10;
	sum=sum*10+r;
	
    }
    
    if(sum==a)
    {
    	printf("it is the palindrome");
    
	}
	else
	{
		printf("it is not a palindrome");
	}
	return 0;
	
}
