#include<stdio.h>
int main()
{
    int i,n;
    int sum=0;
    printf("Enter number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
        sum+=i;  
        }
    }
    printf("sum of even numbrs upto %dis %d",n,sum);
    return 0;
}
