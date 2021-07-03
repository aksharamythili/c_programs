#include<stdio.h>
int main()
{
    char c;
    printf("Enter the letter:\n");
    scanf("%c",&c);
     if(c>=97&&c<=122)
     {
         printf("you enterd lower case");
     }
     else if(c>=60&&c<=99)
     {
printf("enterd upper case");
     }
     else
     {
         printf("you enterd other than character");
     }
     return 0;
}
