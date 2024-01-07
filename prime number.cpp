#include<stdio.h>
int main()
{
	//1,2,3,5,7,11...=prime number
	int n1,n2,i,j;
	printf("enter range: ");
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++);
	{
		for(j=2;j<=i;j++)
		{
			if(i%j==0)
			break;
		}
	}
	if(i=j)
	printf("%d",i);
	return 0;
}
