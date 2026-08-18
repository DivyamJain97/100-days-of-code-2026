//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
	int num;
	printf("Enter an Integer :");
	scanf("%d",&num);
	if (num>0)
		printf("%d is Positive Integer",num);
	else if (num<0)
		printf("%d is negative Integer",num);
	else 
		printf("The number is zero");
	return 0;
}