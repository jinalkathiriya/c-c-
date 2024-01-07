#include<stdio.h>
#include<math.h>

int main()
{
	//area of triangle=s	
	int a,b,c;
	float s,area;
	printf("enter value for a,b,c");
	//scanf("%d,%d,%d",&a,&b,&c);
	scanf("%d%d%d",&a,&b,&c);
	//scanf("%d%d",&a,&b);
	s=(a+b+c)/2;
	s=s*(s-a)*(s-b)*(s-c);
	area=sqrt(s);
	printf("area of triangle=%f",area);
	return 0;	
}
