#include<stdio.h>
union stu
{
	int roll;
	char name[20];
	double marks;
};
int main()
{
	union stu s;
	
	printf("enter student roll number:  ");
	scanf("%d\n",&s.roll);
	printf("%d\n",s.roll);
	
	printf("enter student name:  ");
	scanf("%d\n",&s.name);
	printf("%d\n",s.name);
	
	printf("enter student marks:  ");
	scanf("%d\n",&s.marks);
	printf("%d\n",s.marks);
	
	return 0;
}
	
	
