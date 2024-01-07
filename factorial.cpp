#include<stdio.h>
int main()
{
	//3!=3*2*1
	int i,f=1;
	printf("enter the number");
	scanf("%d",&i);
	do
	{
		f=f*i;
		i--;
	}
	while(i>0);
	printf("the factorial is=%d",f);
	return 0;
}
