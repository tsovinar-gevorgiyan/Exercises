#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c =0;
	int d = 0;
	
	printf("Enter the 1st number: ");
	scanf("%d", &a);

	printf("Enter the 2nd number: ");
	scanf("%d", &b);

	printf("Enter the 3th number: ");
	scanf("%d", &c);

	printf("Enter the 4th number: ");
	scanf("%d", &d);

	if(a+b+c+d == 0){
		if ((a < b) && (a < c) && (a < d))
			printf("%d", a);
		else if ((b < a) && (b < c) && (b < d))
			printf("%d", b);
		else if ((c <a) && (c < b) && (c < d))
			printf("%d", c);
		else if((d < a) && (d < b) && (d < c))
			printf("%d", d);
	}
	else printf("The sum is not equal to 0");
}
