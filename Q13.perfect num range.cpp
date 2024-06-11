#include <stdio.h>
void main()
{

    int i,j,ln,sum;

    printf("Enter upper limit: ");
    scanf("%d",&ln);

    printf("perfect numbers between 1 to %d:\n",ln);
    
    for(i=1; i<=ln; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
