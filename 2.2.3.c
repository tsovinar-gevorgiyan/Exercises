#include <stdio.h>

int main()
{
	int num = 0;

	printf("Please enter a number: ");
	scanf("%d", &num);

	if( num >= 0 && num <= 31) 
		printf("%d", num+32);
	else printf("%d", num);
}
