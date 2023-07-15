#include <stdio.h>

int main()
{

        int year = 0;

        printf("Enter the year: ");

        scanf("%d", &year);

        if(year%4 == 0)
        printf("The year is a leap year");
        else printf("The year is not a leap year");
}
       
