#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter the length of the string:";
	cin>>n;
	char str[n],str1[n];
	for(i=0;i<n;i++)
	{
		cin>>str[i];
		str[i]=str[n-i+j];
	}
	cout<<"the reversed string is :"<<str;
	
	return 0;
	
}
