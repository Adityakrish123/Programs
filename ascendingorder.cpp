#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int j,i,len,n;
	string arr;
	char temp;
	cin>>arr;
	len=arr.length();
	for(int i=0;i<len;i++)
	{
	  for(int j=i+1;j<len;j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
	    }
	}
	
    }
    	cout<<arr;	
    return 0;
}
    
    

