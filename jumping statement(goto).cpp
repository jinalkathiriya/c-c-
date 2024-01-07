#include<stdio.h>
#include<conio.h>

int main()
{
	int i=1;
	label:
		printf("%d",i);
		++i;
	if(i<=10)
	goto label;
	
	return 0;
}
