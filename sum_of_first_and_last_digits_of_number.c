#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits;

printf("enter number:");
scanf("%d",&n);
digits=(int)log10(n);
firstDigit=(int)(n/pow(10,digits));
printf("first diigit=%d\n",firstDigit);
lastDigit=n%10;
printf("lastdigit =%d\n",lastDigit);
int sum=firstDigit+lastDigit;
printf("sum of fd and ld is=%d",sum);
return 0;
}
