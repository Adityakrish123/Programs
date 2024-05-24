#include<iostream>
using namespace std;
int main()
{
  int i,j,m,n,mat[m][n];
  cin>>m>>n;
  for(i=0;i<n;i++)
{
  for(j=0;j<m;j++)
  {
    cin>>mat[i][j];
  }
}
for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 {
   cout<<mat[i][j]<<endl;
 }
 return 0;
}

