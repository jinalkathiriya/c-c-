#include<stdio.h>
int main()
{
	//121,141...=palindrome number
	int n,c,s=0,r;
	printf("enter number; ");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
		s=r+(s*10);
		n=n/10;
	}
	if(c==s)
		printf("palindrome number");
	else
		printf("not palindrome number");
		return 0;
}
