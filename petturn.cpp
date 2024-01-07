#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n;
	printf("enter the no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		for(j=1;j<=n-i;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
    }
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n-i+1;j++)
    	{
    		printf("*");
		}
		for(j=1;j<=i-1;j++)
		{
			printf("  ");
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
