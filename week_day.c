#include <stdio.h>

int main()
{
    int week;

    printf("Enter week number (1-7): ");
    scanf("%d", &week);


    if(week == 1)
    {
        printf("Monday");
    }
    else if(week == 2)
    {
        printf("Tuesday");
    }
    else if(week == 3)
    {
        printf("Wednesday");
    }
    else if(week == 4)
    {
        printf("thurssday");
    }
    else if(week == 5)
    {
        printf("friday");
    }
    else if(week == 6)
    {
        printf("satday");
    }
    else if(week == 7)
    {
        printf("sunday");
    }
    else
    {
        printf("you enterd a number or special character");
    }
    return 0;
}