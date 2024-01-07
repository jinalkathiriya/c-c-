#include<stdio.h>
#include<conio.h>

main()
{
	int a=10,b=59,c=20;
	
	if(a>b)
	{
		if(a>c)
		{
			printf("%d\n",a);
	    }
	    else
	    {
			printf("%d\n",c);
	    }
    }
    else
    {
    	if(b>c)
    	{
    	printf("%d\n",b);
        }
	    else
	    {
		printf("%d\n",c);
	    }
    }
}
