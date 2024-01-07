#include<stdio.h>
#include<conio.h>

main()

{
	int a=50,b=20;
	printf("%d\n",(a>b)&&(a<b));	//0
	printf("%d\n",(a>b)||(a<b));	//1
	printf("%d\n",!(a>b));			//0
	
	getch();
}
