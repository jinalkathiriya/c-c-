#include<stdio.h>
int main()
{
	int n,n1,rem,num=0;
	printf("enter positive number");
	scanf("%d",n);
	n1=n;
	while(n1!=0)
	{
		rem=n1%10;
		num+=rem*rem*rem;
		n1/=10;
	}
	if(num==n)
		printf("%d is an armstrong number,n");
	else
		printf("%d is not an armstrong number,n");
	return 0;	
}
