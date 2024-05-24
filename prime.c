#include <stdio.h>
int main()
{
	int a,b,i,j,f=0;
	printf("Enter the upper and the lower limit of the numbers:",a,b);
	scanf("%d %d",&a,&b);
	 for(i=a;i<=b;i++)
	 {
	   for(j=2;j<i;j++)
	   {
	 	if(i%j==0&&i!=j)
	 	{
		 f=0;
		 break;
	    }
	 	else
	 	{
	 	 f=1;
		}
		
	   }
     
	if(f==1)
	{
		printf("%d is the prime\n",i);
	}
      }

	return 0;
}
