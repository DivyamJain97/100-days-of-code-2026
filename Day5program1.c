//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
float p, r,t,si,a,ci;
    printf("Enter the value of Principal Intrest:");
	scanf("%f",&p);
	printf("Enter the value of Rate of intrest per year:");
	scanf("%f",&r);
	printf("Enter the value of time:");
    scanf("%f",&t);
    si=p*r*t/100; 
	a= p*pow((1+r/100),t);
	ci = a-p;
	printf("Value of your simple intrest is:%.2f\n",si);
	printf("Value of your compound intrest is:%.2f\n",ci);
	return 0;
}