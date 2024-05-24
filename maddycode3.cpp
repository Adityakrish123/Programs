#include<iostream>
#include<vector>
using namespace std;
int main(){
   string arr[10]={"abc", "def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"};
   for(int i=0; i<7; i++){
    cout<<arr[i]<<" ";
   }
   cout<<"Enter the number to return the string";
}