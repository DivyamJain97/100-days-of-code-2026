//Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include <stdio.h>
int main()
{
	char c;	
	printf("Enter an alphabet");
	scanf("%c",&c);
	if (c=='a' ||c=='e' ||c=='o' ||c=='i' ||c=='u' ||c=='A' || c=='O' || c=='I' || c=='U' ||c=='E') 	
		printf("%c is a Vowel",c);
	else
		printf("%c is a Consonant",c);
	return 0; 
}