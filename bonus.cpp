#include <iostream>
using namespace std;
int main()
{
	int arr[7],sum=0,i,a[7];
	cout<<"Enter the no of hours he works in a week:";
	 for(i=0;i<7;i++)
	  {
	 	cin>>arr[i];
	  }
	 
	  	if(i<=8)
	    {
	 		sum+=arr[i]*100;
		}
		else if(i>5)
		{
			sum+=800;
			arr[]
			sum+=arr[i]*1.5;
		}
		else 
		{
			sum+=arr[i]*1.25;
		}
		cout<<"the salary is:"<<sum;
	 return 0;
}
