//Write a program in C to delete an element at a desired position from an array.
//Code by -> [PRANTO]

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{ int max=5;
   char array[max];
   int c;
   printf("Enter the array: ");
 for (int i = 0; i < max ; i++)
 {
   scanf("%d",&array[i]);
 }
   printf("\nEnter the elements you want to delete :\n");
   scanf("%d",&c);
      for (int i= c-1 ; i<max-1; i++)
      {
        array[i] = array[i+1];
        }
        max--; 
        for (int i = 0; i < max; i++)
        {
          printf("%d",array[i]);
        }
        
      
   return 0;
}
