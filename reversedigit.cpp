#include<iostream>
using namespace std;
int Reverse(int a)
{
  int rev=0,rem;
  while(a>0)
 {
	rem=a%10;
    rev=rev*10+rem;
    a=a/10;
 }
 return rev;
}
int main()
{
	int a;
	cin>>a;
   if((a)^2==Reverse(Reverse((a))^2)
	{
		cout<<"the number is adam number:"<<a;
    }
	else
	{
		cout<<"the number is not a adam number:";
	}
	return 0;
}
