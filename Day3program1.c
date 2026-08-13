//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
 float c,f;
 printf("Enter temprature in Celcius :");
 scanf("%f", &c);
 f = (c*9/5)+32;
 printf("Temprature in Farenheit =%.2f\n",f);
 return 0;
 }