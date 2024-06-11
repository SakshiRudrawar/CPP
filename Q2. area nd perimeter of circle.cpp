#include <stdio.h>

int main() 
{
    int maleage, femaleage;

    printf("Enter the age of the male: ");
    scanf("%d", &maleage);

    printf("Enter the age of the female: ");
    scanf("%d", &femaleage);

    if (maleage >= 21 && femaleage >= 18) 
	{
        printf("Both are eligible to marry.\n");
    } 
	else if (maleage >= 21) 
	{
        printf("only male is eligible to marry.\n");
    } 
	else if (femaleage >= 18) 
	{
        printf("only female is eligible to marry.\n");
    } 	
	else 
	{
        printf("Both are are not eligible to marry.\n");
    }
 return 0;
}

