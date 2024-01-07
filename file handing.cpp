#include<stdio.h>

int main()
{
	int num;
	FILE *fp;
	
	fp=fopen("C:\\Users\\hp\\desktop\\jin.txt","w");
	if(fp==NULL)
	{
		printf("file not created");
		exit(1);
	 
	 }
	printf("file created succesfully..!");
	
	printf("enter a number: \n");
	scanf("%d &num");
	
	printf("data wrote in a file");
	fprintf(fp,"%d",num);
	
	fclose(fp);
	
	return 0;
}
	
