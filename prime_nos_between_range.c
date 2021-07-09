#include <stdio.h>

int main()
{
    int i, start, isPrime,end,j; 
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
           printf("%d,",i);
          }
    }
    return 0;
}