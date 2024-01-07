#include<stdio.h>
#include<conio.h>

int main()
{
	int a[2][2],i,j;
	printf("enter array elements");
	
	for(i=0;i<2;i++) //raws
	{
		for(j=0;j<2;j++) //colums
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("matrix elements \n");
		
	for(i=0;i<2;i++) //raws
	{
		for(j=0;j<2;j++) //colums
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
