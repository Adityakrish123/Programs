// the reserach team led caltech un new abeoba that grows in the order of fibonnaci series they are exhibiting this abeoba at a national conferenece they want to the size of ab at a particular type instance if
// write the program to find the size
//13->144
#include<iostream>
using namespace std;
int main()
{
	int i,x,a=-1,b=1,n;
	cin>>n;
	 for(i=0;i<n;i++)
	 {
	 	x=a+b;
	 	a=b;
	 	b=x;
	 	
	 }
	 cout<<"the amoeba count is:"<<x;
	return 0; 
}
