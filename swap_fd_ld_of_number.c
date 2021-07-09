#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits,temp=0;

printf("enter number:");
scanf("%d",&n);
digits=(int)log10(n);
firstDigit=(int)(n/pow(10,digits));
printf("first diigit=%d\n",firstDigit);
lastDigit=n%10;
printf("lastdigit =%d\n",lastDigit);
firstDigit=firstDigit+lastDigit;
lastDigit=firstDigit-lastDigit;
firstDigit=firstDigit-lastDigit;
printf("after swaping%d\n",firstDigit);
printf("after swaping%d\n",lastDigit);
printf("after swaping%d",n);
return 0;
}
