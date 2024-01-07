#include<stdio.h>
#include<conio.h>

main()
{
	int marks;
	
	printf("enter marks..!\n");
	scanf("%d", &marks);
	
	if(marks==100)
	{
		printf("ginius");
	}
	else if(marks>80&&marks<100)
	{
		printf("topper");
	}
	else if(marks>=60&&marks<=70)
	{
		printf("first");
	}
	else
	{
		printf("average student");
	}
}
