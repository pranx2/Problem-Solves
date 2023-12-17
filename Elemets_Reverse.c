//Write a C program to print the elements of an array in reverse order and print them using 
//pointers.
//Code by -> [PRANTO]
#include<stdio.h>
int reverse(int *,int n);
int main()
{
   int max;
    printf("Enter the array size:");
   scanf("%d",&max);
   int array[max];
   printf("Enter the array:");
   for (int i = 0; i < max; i++)
   {
      scanf("%d",&array[i]);
   }
   printf("The  array is : ");
      for (int i = 0 ; i < max ; i++)
      {
         printf("%d\t", array[i]);
      }
      printf("\n");
      printf("Array in reverse order : ");
reverse (array,max);
   return 0;
}
int reverse (int *a,int n){
   for (int  i =n-1; i>=0; i--)
   {
      printf("%d\t",a[i]);
   }
}