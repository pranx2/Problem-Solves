//Write a program in C to print a string in reverse using a pointer.
//Code by -> [PRANTO]

#include<stdio.h>

char reverse (char *p);
int main()
{
 char str[100];
 printf("Enter the strings :");
 gets(str);
 reverse(str);
 return 0;
}
char reverse(char *p){
 int c=0;
 for (int i = 0; *(p+i) != '\0' ; i++)
 {
  c++;
 }
 for (int i = c-1 ; i >=0 ; i--)
 {
  printf("%c",*(p+i));
 }
}
