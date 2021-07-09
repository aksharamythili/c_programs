#include <stdio.h>

int main()
{
    int i, num, sum,end,j;

    /* Input a number from user */
    printf("Enter end: ");
    scanf("%d", &end);
for(i=0;i<=end;i++)
{
    sum=0;
 for(j = 1; j <i; j++)
    {
        /* If i is a divisor of num */
        if(i%j == 0)
        {
            sum += j;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == i&&i>1)
    {
        printf("%d,", i);
    }
}
    return 0;
}