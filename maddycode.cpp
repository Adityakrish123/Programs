#include<iostream>
using namespace std;
int main(){
     int arr[100];
     cout << "Enter the number of elements ";
     int  n;
     cin>>n;
     int count=1;
    for(int i=0; i<n;i++){
      cin >> arr[i];
    }
    int s=arr[0];
    for(int i=1; i<n; i++){
      if(s==arr[i]){
        count++;
      }
      else if(arr[i]!=s){
        if(count%2!=0 && count>1){
          cout<<arr[i-1];
        }
        count=1;
        s=arr[i];
    }
  }
  return 0;
}