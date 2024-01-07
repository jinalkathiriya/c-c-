#include<stdio.h>
#include<conio.h>

int a;  //globle

main()
{
	int b;  //local
	static int c;	//static
	
	printf("%d\n",a);	//0
	printf("%d\n",b);	//garbage
	printf("%d\n",c);	//0
	
	getch();
}
