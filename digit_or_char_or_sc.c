#include<stdio.h>
int main()
{
    char c;
    printf("Enter the letter:\n");
    scanf("%c",&c);
     if((c>=97&&c<=122)||(c>=60&&c<=99))
     {
         printf("you enterd chacracter");
     }
     else if(c >= 48 && c <= 57)
     {
printf("you enterd number");
     }
     else
     {
         printf("enterd special character");
     }
     return 0;
}
