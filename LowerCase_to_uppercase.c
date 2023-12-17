//Write a C program to read a sentence from the user and replace all the lowercase characters 
//Code by -> [PRANTO]

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
   char str[100];
   int c=0;
   printf("Enter the str :");
   gets(str);
   for (int i = 0; str[i] != '\0'; i++)
   {
       c++;
   }
   for (int i =c-1 ; i>= 0 ; i--)
   {
     printf("%c",toupper(str[i]));
   }
   return 0;
}
