#include <stdio.h>

int main()
{
	int a = 0 ;
	int b = 0;

	printf("Enter the 1st number: ");
	scanf("%d", &a);

	printf("Enter the 2nd number: ");
	scanf("%d", &b);

	if(a % b == 0)
		printf("%d/%d = %d",a,b, a/b);
	else if(b % a == 0)
		printf("%d/%d = %d",b, a, b/a);
	else printf ("The numbers can not overlap");
}
