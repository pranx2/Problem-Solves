// Write a multifunction program to print the following patterns where number of rows is user 
//input and must be read in main function. There should be separate function for each of the 
//following patterns and note that, you cannot pass any data through parameters to those 
//functions.
//Code by-> [pranto]
#include<stdio.h>
int pp();
int ilhpp();

int main(int argc, char const *argv[])
{  int n;
   printf("\nMultifunction program\n");
   printf("---------------------");
   printf("\nPyramid pattern-> [1]");
   printf("\nInverted left half pyramid pattern-> [2]");
   printf("\nPascal triangle pattern-> [3]");
   printf("\nnumber pattern-> [4]\n");
   printf("\nEnter the number between [1-4] which pattern you want:");
   scanf("%d",n);
   if (n==1)
   {
      pp();
   }
   if (n==2)
   {
      ilhpp();
   }
   
   
 return 0;
}
int ilhpp(){
    int i,j,n,k;
   printf("Enter row number:");
   scanf("%d",&n);
 for ( i = n; i >= 1; i--)
  {
     for ( j = i ; j < n ; j++)
     {
      printf(" ");//counting space;
     }
     for (k = 1; k <= i; k++)
     {
      printf("*");
     }
     printf("\n");
  }
}
int pp(){
   int n,i,j,k;
   printf("Enter The row number ");
   scanf("%d",&n);
   for ( i = 1 ; i <= n; i++)
   {
      for (j = n ; j > i; i--)
      {
         printf(" ");
      }
      for (k=1; k <= i ; k++)
      {
         printf("%d",i);
      }
      printf("\n");     
   }   
}