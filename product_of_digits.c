#include <stdio.h>
#include <math.h>

int main()
{
    int num,pro=1;

printf("enter number:");
scanf("%d",&num);
while(num!=0)
{
    pro*=num%10;
    num=num/10;
}
printf("product is%d",pro);
return 0;
}