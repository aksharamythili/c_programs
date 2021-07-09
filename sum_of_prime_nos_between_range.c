#include <stdio.h>

int main()
{
    int i, start, isPrime,end,j,sum=0; 
    printf("Enter start: ");
    scanf("%d", &start);
    printf("enter end:");
    scanf("%d",&end);
    for(i=start;i<=end;i++)
    {
        isPrime=1;
    for(j=2; j<=i/2; j++)
    {
        if(i%j==0)
        {
            isPrime = 0;
            break;
        }
    }
        if(isPrime == 1 )
           {
               sum+=i;
          }
    }
    printf("sum is :%d",sum);
    return 0;
}