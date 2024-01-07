#include<stdio.h>
struct stu
{
	int roll;
	char name[20];
	double marks;
};
int main()
{
	struct stu s;
	
	printf("enter student recoard: ");
	scanf("%d%s%f",&s.roll,&s.name,&s.marks);
	
	printf("%d%s%f",s.roll,s.name,s.marks);
	
	return 0;
}
