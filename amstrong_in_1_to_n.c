#include <stdio.h>
#include <math.h>

int main()
{
    int originalNum, num, lastDigit, digits, sum,i,end;

    /* Input number from user */
    printf("Enter end: ");
    scanf("%d", &end);
    for(i=1;i<=end;i++)
{
    num=i;
    sum=0;
    digits = (int) log10(num) + 1;
    while(num > 0)
    {
        lastDigit = num % 10;
        sum = sum + (int)(pow(lastDigit, digits));
        num = num / 10;
    }
    if(i==sum)
    {
        printf("%d,", i);
    }
}

    return 0;
}