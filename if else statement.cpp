#include<stdio.h>
#include<conio.h>

main()

{
	int age;
	
	printf("enter age..!\n");
	scanf("%d", &age);
	
	if(age>=18)			//23>18
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
	getch();
}
