#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	
	puts("enter any string: ");
	gets(str);	//input
	
	puts(strlwr(str));	//oputput
	
	return 0;
}
