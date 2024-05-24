#include<iostream>
using namespace std;
int main()
{
  int i,max=0,r,m,n;
  cin>>n>>m;
  for(i=1;i<=m;i++)
  {
    r=m%n;
  }
  if(r>max)
  {
    max=r;
  }
  else
  {
    return -1;
  }
  cout<<max;

}