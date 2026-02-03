#include <stdio.h>

int main()
{
	int deposit=0;
	int savings;
	
	printf("What's your current balance?");
	scanf("%d",&savings);
	
	savings = savings;
	printf("How much would you like to deposit?");
	
	scanf("%d",&deposit);
	savings = savings+deposit;
	printf("Now you have %d dollars",savings);
	
	return 0;	
}


