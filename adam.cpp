#include<iostream>
using namespace std;
int main()
{
  int rev=0,rem,a,rev2=0,rem1,rev3;
  cin>>a;
  int rev1=a*a;
  while(a>0)
 {
	rem=a%10;
    rev=rev*10+rem;
    a=a/10;
 }
  rev2=rev*rev;
 while(rev2>0)
 {
 	rem1=rev2%10;
 	rev3=rev3*10+rem1;
 	rev2=rev2/10;
 }
 if(rev1==rev3)
 {
 	cout<<"the number is an adam number";
 }
 else
 {
 	cout<<"the number is not an adam number";
 }
 
 return 0;
}
