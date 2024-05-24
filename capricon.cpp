#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,r,q,p,m;
	cin>>n;
	int sqr=n*n;
	int count=0;
	while(n!=0)
	{
	 r=sqr%10;
	 q=sqr/10;
	 count++;
	}
    p=pow(10,count);
    r=sqr/p;
    q=sqr/p;
    if(r+q==n)
	{
		cout<<"the number is kepalar number:"<<n;
	}
	else
	{
		cout<<"the number is not a keplar number";
	}
	
	return 0;
}
