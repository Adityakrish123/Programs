#include<iostream>
using namespace std;
int main()
{
	int i,arr[100],temp1[100],temp2[100],len;
	len =sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<len;i++)
	{
	cin>>arr;
    }
	if(arr[i]%2==0)
	{
		arr[i]=temp1;
	}
	else
	{
		arr[i]=temp2;
	}
	cout<<"the even numbered elements are:"<<temp1;
	cout<<"the odd numbered elements are:"<<temp2;
	
	return 0;
	
}
