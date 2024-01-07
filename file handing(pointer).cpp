#include<stdio.h>

int main()
{
	int num;
	FILE *fp;
	
	if((pfp=fopen)("C:\\Users\\hp\\desktop\\jin.txt","r"))==null
	{
		printf("error occured");
		exit(1);
	}
	fscanf(fp,"%d",&num);
	printf("%d",num);
	
	fclose(fp);
	
	return 0;
}
