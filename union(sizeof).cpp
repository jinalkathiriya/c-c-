#include<stdio.h>
union stu
{
	int roll;
	char name;
	double marks;
};
int main()
{
	union stu u;
	printf("%d",sizeof(u));
}
