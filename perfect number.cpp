#include<stdio.h>
int main()
{
	//6=1+2+3
	int n,sum=0,i;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	printf("perfect number");
	else
	printf("not perfect number");
}
