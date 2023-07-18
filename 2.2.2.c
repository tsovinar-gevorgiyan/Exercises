#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	

	printf("Enter the 1st number: ");
	scanf("%d", &a);

	printf("Enter the 2nd number: ");
	scanf("%d", &b);

	printf("Enter th 3th number: ");
	scanf("%d", &c);


	int min = a;
	if ((b < a) && (b < c))
		min = b;
	else if (c < a && c < b)
		min = c;
	

	for (int i = min; i > 0; i--) {
		if( (a % i == 0) && (b % i == 0) && (c % i == 0)){
		printf("The greatest common divisor is %d", i);
		break;}
				
	}}	



