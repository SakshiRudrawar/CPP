A//Q1 range of armstrong no
#include<stdio.h>
int main() {
    int n, i, num, sum, digit;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers in the range 1 to %d are: ", n);
    for (i = 1; i <= n; ++i) {
        num = i;
        sum = 0;

        while (num > 0) 
		{
            digit = num % 10;
            sum =sum+pow(digit, 3);
            num =num/ 10;
        }

        if (sum == i) 
		ssS{
            printf("%d, ", i);
        }
    }

    printf("\n");

    return 0;
}
