#include<iostream>
using namespace std;
//x=a*n+Z
int main()
{
	int x,a;
	cout<<"enter the values of x and a:";
	cin>>x>>a;
	int div=x/a;
	int rem=x%a;
	if(x=a*div+rem)
	{
		cout<<"the values of div and rem is :"<<div<<","<<rem;
	}
	return 0;
}
