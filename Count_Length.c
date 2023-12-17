//Write a C program to find the maximum number of characters of a sentence and print the 
//numbers in the terminal by using string.
//Code By -> [PRANTO];
#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{int count;
  char str[1000];
  printf("Enter the string:");
  gets(str);
  count = strlen(str);
  printf("The maximum number is : %d",count);
 return 0;
}
