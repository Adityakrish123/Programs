#include<iostream>
using namespace std;
int main()
{
    int n,m,digit,digit2,count;
    cin>>n>>m;
    while(n>0)
    {
    for(int i=0;i<n;i++)
    {
        digit=n%10;
        cout<<digit;
        n=n/10;
    }
    }
    cout<<endl;
     while(m>0)
    {
    for(int j=0;j<n;j++)
    {
        digit2=m%10;
        cout<<digit2;
        m=m/10;
    }
    if(digit<digit2)
    {
      count++;
    }
    cout<< count;
    }
    return 0;

}
