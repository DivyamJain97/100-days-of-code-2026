//Write a program to input time in seconds and convert it to hours:minutes:seconds format
#include <stdio.h>
int main ()
{
int t,h,m,s;
   printf("Enter time in seconds :");
   scanf("%d",&t);
   h=t/3600;
   t=t%3600;
   m=t/60;
   s=t%60;
   printf("Hours = %d\n",h);
   printf("minutes = %d\n",m);
   printf("seconds = %d\n",s);
   return 0;
}