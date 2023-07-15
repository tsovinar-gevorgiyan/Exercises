#include <stdio.h>

int main()
{
	
	int num = 0;
	int sum = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);
	
	while(num!=0){

	int balance = num%10;
	sum += balance;
	num = (num-balance)/10;
	}
		
	printf("The sum of digits is %d", sum);
	
}
