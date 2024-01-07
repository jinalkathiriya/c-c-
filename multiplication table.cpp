#include<stdio.h>
int main()
{
	//2= 2 4 6 8 10 12 14 16 18 20
	int n,i,c;
	printf("enter number: ");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d  %d  %d\n",n,i ,n*i);
	}
	return 0;
}
