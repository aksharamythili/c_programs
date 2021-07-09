#include <stdio.h>

int main()
{
int n,originalnum,i,sum,fact,lastdigit;
printf("enter nmber:");
scanf("%d",&n);
originalnum=n;
sum=0;
while(n>0)
{
    fact=1;
    lastdigit=n%10;
    for(i=1;i<=lastdigit;i++)
    {
        fact=fact*i;
    }

sum+=fact;
n=n/10;
}
if(sum==originalnum)
{
    printf("%d is armstrong",originalnum);
}
else
{
    printf("not a amstrong");
}
return 0;
}