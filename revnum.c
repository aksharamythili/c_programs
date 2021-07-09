#include <stdio.h>
#include <math.h>

int main()
{
    int num,rev=0;

printf("enter number:");
scanf("%d",&num);
while(num!=0)
{
    rev=(rev*10)+(num%10);
    
    num=num/10;
}
printf("after rev=%d",rev);
return 0;
}