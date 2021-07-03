#include<stdio.h>
int main()
{
    char letter;
    printf("Enter the letter:\n");
    scanf("%c",&letter);
    if((letter>=97&&letter<=122)||(letter>=65&&letter<=90))
    {
        printf("you enterd charcter");
    }
    else
    {
      printf("you enterd othaer than charter");  
    }
    return 0;
    }