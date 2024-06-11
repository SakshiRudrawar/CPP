#include <stdio.h>

void main() 

{
    double originalPrice, discountedPrice;

    printf("Enter the original price of the item");
    scanf("%lf", &originalPrice);

    if (originalPrice >= 100.0)
	 {
        discountedPrice = originalPrice * 0.9;
    } 
	else if (originalPrice >= 50.0)
	{
        discountedPrice = originalPrice * 0.95; 
    } 
	else
    {
        discountedPrice = originalPrice; 
    }

    printf("Discounted price: $%.2lf\n", discountedPrice);
}

