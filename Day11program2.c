//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
	float p,l,cp,sp,a,b;
	printf("Enter cost price :");
	scanf("%f",&cp);
	printf("Enter selling price :");
	scanf("%f",&sp);
	if (sp>cp)
	{
		a=sp-cp;
		b=(a/cp)*100;
		printf("Profit = %.0f%",b);
	}	
	else if (cp>sp)
	{
	    a=cp-sp;
		b=(a/cp)*100;
		printf("Loss = %.0f%",b);
	}
    else
	{		
		printf("No profit, No loss");
	}
	return 0;
}