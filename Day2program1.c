//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
	int l,b,P,A;
	printf("Enter Length of rectangle :");
	scanf("%d",&l);
	printf("Enter breadth of rectangle :");
	scanf("%d",&b);
	P= 2*(l+b);
	A = l*b;
	printf("Perimeter = %d\n",P);
	printf("Area = %d\n",A);
	return 0;
}

