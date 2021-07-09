#include <stdio.h>

int main()
{
    int n1,n2,hcf=1,min,i;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("Enter second number:");
    scanf("%d",&n2);
min=(n1<n2)?n1:n2;
for(i=1;i<=min;i++)
{
    if(n1%i==0&&n2%i==0)
    {
        hcf=i;
    }
}
printf("hcf of %d and %d is %d",n1,n2,hcf);
return 0;
}
