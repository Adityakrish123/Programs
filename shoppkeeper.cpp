#include<iostream>
using namespace std;
int i;
	int n,amount=0;
	int change30=0;
	int change60=0;
	int change120=0;x
	bool isTransactionposiible(int n,int amount)
	{
		for(i=0;i<n;i++)
		{
			cout<<i<<"the number of customers is:%d";
			cin>>amount;
			if(amount==30)
			{
				change30++;
				return true;
			}
			else if(amount==60)
			{
				change60++;
				change30--;
				return true;
			}
			else if(amount==120)
			{
				change120++;
				change60--;
				change30--;
				return true;
			}
			else
			{
			 return false;	
			}
		}
	}
	
int main()
{
	int n,amount=0;
	int change30=0;
	int change60=0;
	int change120=0;
	cin>>n;
	bool isTransactionposiible(int n,int amount);

return 0;	
	
}
