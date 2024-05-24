#include<iostream>
using namespace std;
int main(){
	int k = 0,a = 0;
	int arr[10];
	int end = 20;
	for(int i=0;i<10;i++){
		arr[i] = i+1;
	}
	for(int i=0;i<4;i++){
		for(int j =0;j<k;j++){
			cout<<"  ";
		}
		k++;
		for(int j=0;j<=4-k;j++){
			cout<<arr[a]<<"*";
			a++;
		}
		int l = 4-k;
		for(int j = l;j>0;j--){
			cout<<end-(l-1)<<"*";
			
		}
		end= end-4;
		cout<<endl;
	}
}
