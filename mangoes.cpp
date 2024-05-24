#include<iostream>
using namespace std;
int main()
{
int mangoes,n,count[n];
count[n]=0;
cin>>mangoes>>n; 

    for (int i = 0; mangoes>0; ++i) 
		{
        count[i % n] += min(mangoes, i + 1);
        mangoes -= i + 1;
        }
    cout<<"no of ways the mangoes gets distributed is:"<<count;
    return 0;    

}

