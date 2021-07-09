#include <stdio.h>

int main()
{
    int num,i,isPrime=1;
    printf("enter number:");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++)
    {
        if(num%i==0)
        {
            isPrime=0;
            break;
        }
    }
    if(isPrime==1&&num>1)

    {
        printf("%d is pime",num);

    }
    else
    {
        printf("%d is not a prime",num);
    }
    return 0;
}