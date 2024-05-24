//castel wants to buy a shirt as he is very lazy he decided to buy the shirt in online he chooses the shirt on flipkart and suprised to see the same shirt on snapdeal and amazon as well so he decied to buy the shirt which offers the eleasr the shipping chargees have been given as the input help him in calculating the the price of the shirt and decide the shirt has to bought if the price in a all three websites are same then the 1st priority goes to flipkart ,snapdeal and amazon.
#include<iostream>
using namespace std;
int main()
{ 
  float cost[3],ship[3],dis[3],sum[3];
  int i,min=99999;
  char c[3][25]={"Amazon","flipkart","Snapdeal"};
  for(i=0;i<3;i++)
  {
   sum[i]=0;
   cout<<"Enter the cost of the shirt:"<<c[i];
   cin>>cost[i];
   cout<<"Enter the shipment cost of the shirt:"<<c[i];
   cin>>ship[i];
   cout<<"Enter the discount percentage of the shirt:"<<c[i];
   cin>>dis[i];
  }
  for(i=0;i<3;i++)
  {
  	sum[i]+=cost[i];
	sum[i]+=ship[i];
	sum[i]*=(dis[i]/100);
  if(sum[i]<min)
  {
  	int f=i;
  	cout<<"the minimum amount of the shirt is:"<<f<<endl;
  }
  }
  return 0;
}
