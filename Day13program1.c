//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main ()
{
	int a,b;
	char o;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter operator(+, -, *, /, %) : ");
	scanf("  %c",&o);
	printf("Enter second number :");
	scanf("%d",&b);
	switch(o)
	{
	  case '+':
	  printf("Result = %d\n",a+b);
	  break;
	  case '-':
	  printf("Result = %d\n",a-b);
	  break;
	  case '*':
	  printf("Result = %d\n",a*b);
	  break;
	  case '/':
	  if (b!=0)
	    printf("Result = %d\n",a/b);
      else
	    printf("Division by zero is not possible.");  
	  case '%':
	  if (b!=0)  
	    printf("Result = %d\n",a%b);
      else
		 printf("Modulus by zero is not possible.\n");
	  break;
	  default:
	  printf("Invaild operator\n");
    }
	  return 0;
}