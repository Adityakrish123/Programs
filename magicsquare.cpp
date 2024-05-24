#include<iostream>
using namespace std;
int main()
{
	int d1,d2,i,j,n,arr[n][n],a;
	cout<<"Enter the no of rows";
	cin>>n;
	cout<<"enter the matrix";
	for(a=0;a<n;a++)
	{
	cin>>arr[n][n];
    }
	for(i=0;i<n;i++)
	{
	 for(j=0;j<n;j++)
	{
		if(i==j)
		{
			d1+=arr[i][j];
		}
		else if(i+j==n-1)
		{
			d2+=arr[i][j];
		}
	}
   }
	if(d1==d2)
	{
		cout<<"the given matrix is a magic square:";
	}
	else{
		cout<<"the given matrix is not a magic square:";
	}
	
	return 0;
}
