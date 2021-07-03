#include<stdio.h>
int main()
{
    int year;
    printf("Enter the yeear:\n");
    scanf("%d",year);
if(((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0))
    {

printf("year  is leap");
    }  
    
    else
    {
        printf("year is not leap ");
    }
    return 0;
}