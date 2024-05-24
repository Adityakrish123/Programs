#include <iostream>
#include <stack>
using namespace std;
bool Brackets( char expr[100])
{
    stack<char> temp;
    for (int i = 0; i < expr[100]; i++)  
	{
        if (temp.empty()) 
		{
            temp.push(expr[i]);
        }
        else if ((temp.top() == '(' && expr[i] == ')')
                 || (temp.top() == '{' && expr[i] == '}')
                 || (temp.top() == '[' && expr[i] == ']')) 
		{
            temp.pop();
        }
        else 
		{
            temp.push(expr[i]);
        }
    }
    if (temp.empty()) 
	{
        return true;
    }
    return false;
}
int main()
{
    char expr[100];
    int i,n;
	cin >>expr[100]; 
	for(i=0;i<=n;i++)
	cout<< "Enter the string to comapare:",expr;
    if (Brackets(char expr[100]))
        cout << "correct";
    else
        cout << "incorrect";
    return 0;
}

