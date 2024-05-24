#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,num1,num2;
    cin>>num1;
    cin>>num2;
    if(num1==30||num2==30||num1+num2==30)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }
    return 0;

}