
//Write a C program using string to remove white spaces from a given string.
//Code By-[PRAN].
#include<stdio.h>

int main(int argc, char const *argv[])
{
 char str[100];
 char new[100];
 
 int i=0 ,j = 0 ;
 printf("Enter the string: ");
 gets(str);

 while (str[i] != '\0')
 {
    if (!(str[i] == ' ' && str[i+1] == ' '))
    {
       new[j] = str[i];
       j++;
    }
    i++;
 }
 new[j] = '\0';
 printf("The string is after removing space :%s",new);
 return 0;
}
