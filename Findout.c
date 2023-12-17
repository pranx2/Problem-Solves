//. Write a C program to find the number, vowels, consonants, whitespace, digits and words 
//in a given string.
//Code By -> [PRANTO]

#include<stdio.h>
#include<string.h>
   int main(int argc, char const *argv[])
   {
      char str [100];
      printf("Enter the Str:");
      gets(str);
      int v,d,c,w,s;
      v = c = d = w = s = 0;
      for (int i = 0; str[i] != '\0' ; i++)
      {
         int ch =str[i];
            if (ch =='a'||ch == 'e'||ch =='i'||ch=='o'||ch=='u'||
               ch =='A'||ch == 'E'||ch =='I'||ch=='O'||ch=='U')
               {
               v++;
            }
            else if ((ch >='a' && ch <= 'z')|| (ch >='A' && ch <= 'Z'))
            {
               c++;
            }
            else if (ch >= '0' && ch <= '9'){
               d++;
            }
            else if (ch ==' ')
            {
               w++;
            } 
            if (ch ==' ')
            {
               s++;
            } 
      }
      w++;
 
      int t = strlen(str);
       printf("\nThe number of word is : %d",w);
       printf("\nThe number of space is : %d",s);
       printf("\nThe number of vowel is : %d",v);
       printf("\nThe number of consonant is : %d",c);
       printf("\nThe number of digit is : %d",d);
       printf("\nThe total number of string  is : %d",t);
      return 0;
   }
   