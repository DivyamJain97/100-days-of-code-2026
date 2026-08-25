//Write a program to calculate library fine based on late days as follows: 
#include <stdio.h>
int main()
{
	int d, f=0;
	printf("Enter no. of late days :");
	scanf("%d",&d);
	if (d<=0)
	{
		printf("No fine.");
	}
	else if (d<=5)
	{
        f=d*2;	
	   	   printf("Libary fine =%d",f);
	}
	else if (d<=10)
	{
		f=(5*2)+(d-5)*4;
	    printf("Libary fine =%d",f);
	}
	else if (d<=30)
	{
		f=(5*2)+(5*4)+(d-10)*6;
	    printf("Libary fine =%d",f);
	}
	else 
	{
		printf("Membership canclled.");
	}	
	return 0;
		
}