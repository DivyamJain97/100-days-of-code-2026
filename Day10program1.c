//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	if (a<=0||b<=0||c<=0)
		printf("Triangle is invaild\n");
	else if (a+b<=c ||b+c<=a ||a+c<=b)
		printf("Triangle is invaild\n");
	else {
		printf("Triangle is valid\n");

  if (a==b && b==c)
		printf("Type: Equilateral triangle\n");
	else if (a==b || b==c || a==c)
		printf("Type: Isosceles triangle\n");
	else 
		printf("Type: Scalene triangle\n");

	if (a*a+b*b==c*c ||b*b+c*c==a*a || a*a+c*c==b*b)
		printf("It is also a Right-angled triangle\n");
	}

	return 0; 
		
}