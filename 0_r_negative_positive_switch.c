#include <stdio.h>

int main()
{
    int num;

    /* Input a number from user */
    printf("Enter any number to check 0  or positive negative: ");
    scanf("%d", &num);
switch(num>0)
{
case 1:
printf(" u enterd positive");
break;
case 0:
switch(num<0)
{
    case 1:
    printf("i entered negative");
    break;
    case 0:
    printf("u  entred 0");
    break;

}
break;
}
return 0;
}