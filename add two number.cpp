#include<stdio.h>

main()
{
	//number1+number2=sum of number
	int num1,num2;
	int result;
	printf("enter num1");
	scanf("%d",&num1);
	printf("enter num2");
	scanf("%d",&num2);
	result=num1+num2;
	printf("the sum of %d and %d is %d", num1,num2,result);
	return 0;
}
