//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter three numbers : ");
	scanf("%f %f %f",&a,&b,&c);
	if (a>b&&a>c)
		printf("%d is the largest number",a);
	else if (a<b&&b>c)
		printf("%.2f is the largest number",b);
	else 
		printf("%.2f is the largest number",c);
	return 0;
}