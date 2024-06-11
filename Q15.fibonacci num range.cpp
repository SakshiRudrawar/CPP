#include <stdio.h>

int main()
 {
    int n, i;
    long long int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series for %d terms: \n", n);

    for (i = 1; i <= n; i++) 
	{
        if (i == 1) 
		{
            printf("%lld", first);
        } 
		else if (i == 2) 
		{
            printf(", %lld", second);
        } 
		else
		{
            next = first + second;
            printf(", %lld", next);
            first = second;
            second = next;
        }
    }
    printf("\n");

    return 0;
}





