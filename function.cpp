		#include<stdio.h>

int sum()	//user defined

{
	int a,b;
	printf("enter any two numbers: ");
	scanf("%d%d",&a,&b);
	return a+b;
}
int main()
{
	int store=sum();
	printf("%d",store);
	
	return 0;
}
