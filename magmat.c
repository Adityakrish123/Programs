#include<stdio.h>
int main()
  {
	int r ,c,i,j,a,b=0;
	scanf("%d %d",&r,&c);
	int mat[r][c],rsum[r],csum[c],dsum=0,ssum=0;
	for( i=0;i<r;i++){
		rsum[i]=0;
		
		for(j=0;j<c;j++)
		{
			csum[j]=0;
			scanf("%d",&mat[i][j]);
		}
	}
	for( i=0,k=r;i<r,k>0;i++,k--)
	   {
		dsum+=mat[i][i];
		for(j=0;j<c;j++)
		{
			rsum[i]+=mat[i][j];
			csum[i]+=mat[j][i]; 
		}
	  }
	a=rsum[0];
	for(i=0,j=0;i<r,j<c;i++,j++)
	{
		if(rsum[i]==a && csum[i]==a && dsum==a && ssum==a)
		{
			b=1;
		}
		else
		{
			b=0;
		}
	}
	if(b==1)
	    {
			printf("Magic Matrix");
		}
		else 
		{
			printf("Not a magic matrix");
		}
		return 0;
}
