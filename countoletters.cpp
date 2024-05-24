#include <iostream>
using namespace std
int main()
{
    int count;
    char n;
    cout<<"enter a string";
    gets(n);
    for(int i=0; i<n; i++)
    {
        if(n[i]==n[i+1])
        {
            count++;
        }
        else
        {
            return -1;
        }
    }
    cout<<count<<" characters;
    return 0;
}