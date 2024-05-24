#include<iostream>
using namespace std;
int main()
{
	int n,m,i,sum=0,c;
	cout<<"Enter the no of groups:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cout<<"no of persons in the group:";
		cin>>arr[i];
		sum+=arr[i]; 
	}
	cout<<"Enter the maximum capacity of the bus:";
	cin>>m;
	c=sum/m;
	if(sum%m!=0)
	{
		c+=1;
	}
	cout<<"The required number of buses is :"<<c;
	
	return 0;
}
