#include<stdio.h>
int main()
{
	//2,4,6...=even number
	//1,3,5...=odd number
	int n,m;
	printf("enter number");
	scanf("%d",&n);
    m=n/2;

	if(m*2==n)
	{
		printf("even number");
	}
	else
	{
		printf("odd number");	
	}
	return 0;
}
