#include<stdio.h>
int main (){
	int num, lastDigit;
	printf ( "Enter a number: ");

	scanf("%d",&num);
	lastDigit= num % 10;
	
	if (lastDigit %2==0)
	   printf("Last digit %d is Even\n",
	   lastDigit);
	   else
	   printf("Last digit %d is odd\n",lastDigit);
	   return 0;
}