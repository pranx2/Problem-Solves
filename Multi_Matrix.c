// Write a C program to read two matrixes from user into two different 2D array and multiply 
//these two matrixes and finally display the result.
//Code By -> [PRANTO]

#include<stdio.h>
#define max_row 2
#define max_colum 2
int main()
{
 int array1[2][2];
 int array2[2][2];
 int i,j,k;
 printf("Enter the matrix:");
 for ( i = 0; i < max_row; i++)
 {
      for ( j = 0; j < max_colum; j++)
      {
            scanf("%d",&array1[i][j]);
      }     
 }
   printf("Enter the second matrix : ");
   for ( i = 0; i < max_row; i++)
   {
      for ( j = 0; j < max_colum; j++)
      {
         scanf("%d",&array2[i][j]);
      }
   }
   //code line 25 to 44 [can be skip]->This lines code only for understanding the code flow:
   printf("\nThe first matrix is :\n");
      for ( i = 0; i < max_row; i++)
      {
         for ( j = 0; j < max_colum; j++)
         {
            printf("%d\t",array1[i][j]);
         } 
         printf("\n");
      }
      printf("\nThe  second matrix is :\n");
      for ( i = 0; i < max_row; i++)
      {
         for ( j = 0; j < max_colum; j++)
         {
            printf("%d\t",array2[i][j]);
         } 
         printf("\n");
      }
      //Multi
      printf("\nAfter multi,the matrix is :\n");
      int sum = 0;
   for ( i = 0; i < max_row; i++)
   {
      for ( j = 0; j < max_colum; j++)
      {
         for ( k = 0; k < max_colum; k++)
         {
            sum = sum + (array1[i][k] * array2[k][j] );
         }
            printf("%d\t",sum);
            sum = 0;
      }
         printf("\n");
   }  
      return 0;
}

