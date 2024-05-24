#include<stdio.h>
#include<string.h>
int main()
{
	int a,r,sum,temp,total;
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
	r=temp%10;
	temp=temp/10;
	sum=sum*10+r;
    }
    total=sum+a;
    if(a==total)
     {
     	printf("it is the palindrome");
     		 break;

	 }
	else
	 {
	 	 printf("it is not a palindrome");
	 }
	 
    
