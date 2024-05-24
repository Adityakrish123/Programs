#include <stdio.h>
int main()
{
	int i,n,min,max;
	int a[100];
	printf("Enter the number of elements for comparing")
    scanf("%d",&n);
    printf("Enter the array elements :");
 for(i=0;i<n;i++)
    {
	  scanf("%d",&a[i]);
    }
    	
   min=max=a[i];
 for(i=1;i<n;i++)
    {
      if(a[i]<min)
	    {
	    	min=a[i];	
		}
	     if(a[i]>min)
	  {
	  	 max=a[i];
	  }
		
	}
	printf("The minmum value of the array is :%d",min);
	printf("The maximum value of the array is :%d",max);
 return 0;	  
}


