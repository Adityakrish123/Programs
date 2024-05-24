#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s,words;
	int count = 1; 
	getline(cin,s);
	words=s.find(" ");
	for(int i=0;i<s.size();i++)
	{
	   for (int i=0;i<words.size();i++) 
	   { 
       for (int j=i+1;j<words.size();j++)
	   {  
        if(words[i] == words[j]) 
		{ 
            count = count + 1;    
            words[j]='0';
	    }
        if(count > 1  && words[i] != '0') 
        cout<<words;  
	   }
       }
	return 0;
}
}
