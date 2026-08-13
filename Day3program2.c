//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main ()
{
int a,b,c;
    printf("Enter the value of First no.:");
    scanf("%d",&a);
	printf("Enter the value of Second no.:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping:\n");
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	return 0;
}