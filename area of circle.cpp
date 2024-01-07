#include<stdio.h>

int main()

{
	//pi*r*r=circle area
	int r;
	float pi=3.14,area;
	printf("enter the radius of circle \n");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle =%f",area);
	return 0;
}
