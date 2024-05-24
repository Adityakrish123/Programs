#include <stdio.h>
int main()
{
	int n,pt=0;
	printf("Enter the number of purchase performance for commutation:");
	scanf("%d",&n);
	while(n>=50)
	{
		if(n>=5000)
		{
			n=n-5000;
			pt=pt+5;	
		}
		else if(n>=1000)
		{
			n=n-1000;
			pt=pt+4;	
		}
		else if(n>=100)
		{
			n=n-100;
			pt=pt+3;	
		}
		else
		{
			n=n-50;
			pt=pt+2;	
		}
	}
	printf("The pt credit points for the customer is :%d",pt);
	
	return 0;
}
