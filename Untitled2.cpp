#include<stdio.h>
int main()
{
	int n,fact=1,i,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	while(fact%10==0)
	{	
		fact = fact/10;
	}
	printf("%d",fact%10);
 return 0;	
}

