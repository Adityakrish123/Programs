#include<iostream>
using namespace std;
int main()
{
	int n,k,i,arr[100],max=0,s,j;
	cout<<"Enter the array size to comapraed:"<<endl;
	cin>>s;
	for(i=0;i<s;i++)
	{
	  cin>>arr[i];
    }
	cout<<"Enter the k number to be compared:"<<endl;
	cin>>k;
	for(i=0;j=k-1;j++;i++;j<n)
	{
		int max=a[i];
		for(int h=i+1;h<=j;h++)
		{
		 if(max<a[h])
		 {
		 	max=a[h];
		 } 	
		}
	cout<<max<<" ";	
	}

    
	return 0;
}
