#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  int n;
  cin>>n;
  int x=0,count=1;
  v.push_back(1);
  int size =0,flag=0;
  while(x<n){
     for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
          if(v[i]==v[j] && v[i]!=-1){
              count++;
              v[j] = -1;
          }
          if(v[i]==-1){
             flag=1;
             break;
          }
        }
        if(flag!=1){
           cout<<count;
           v.push_back(count);
           cout<<v[i]<<" ";
           v.push_back(v[i]);
           count=1;
           size=size+2;
        }
        flag=0;
    }
    x++;
    v.erase(v.begin(),v.end()-size);    
    size=0;
  }
}