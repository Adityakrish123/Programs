#include<iostream>

using namespace std;

int main(){
    int i,j,k;
    cin>>i>>j>>k;
    int a,b,sum=0;
    for(a=i;a<=j;a++)
    {
        cout<<a<<endl;
        sum = sum+a;
    }
    for(b=j-1;j>=k;j--)
    {   
        cout<<b<<endl;
        sum = sum+b;
    }

    cout<<sum<<endl;
}