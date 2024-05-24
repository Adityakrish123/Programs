#include<stdio.h>
int main()
{
  int n,arr[20],i,l=0,j,temp[20];
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }
  int count=1;
  for(int i=0;i<n;i++)
  {
    if(arr[i]!=-1)
    {
    for(int j=i+1;j<n;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        arr[j]=-1;
      }
    }
    printf("%d\n\t",count);
    if(count%2==1)
    {
      temp[l++]=arr[i];
      count=1;
    }
    }
  }
  for(i=0;i<n;i++)
  {
    printf("\n%d",arr[i]);
  }
  for(int i=0;i<l;i++)
  {
    printf("\t%d",temp[i]);
  }
}