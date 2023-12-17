

//Write a C program to rearrange an array in such an order that– small, large, second smallest, 
//Code by->[PRANTO]
#include<stdio.h>
#define max 10
int main(int argc, char const *argv[])
{
 int array[max];
 printf("Enter the array");
 for (int i = 0; i < max; i++)
 {
    scanf("%d",&array[i]);
 }
 int large=array[0],small=array[0],large2=array[0],small2=array[0];
   for (int i = 0; i < max; i++)
   {
     if (array[i] > large )
     {
      large = array[i];
     }
     if (array[i] < small)
     {
       small = array[i];
     }
   }
   for (int i = 0; i < max; i++){
    if (array[i] < large && array[i] >small )
     {
         large2= array[i];
     }
   }
     for (int i = 0; i < max ; i++){
     if (array[i] < large2 && array[i] > small)
     {
         small2= array[i];
         break;
      }
     }
   
   printf("The large number is : %d\n",large);
   printf("The small number is : %d\n",small);
   printf("The second large number is : %d\n",large2);
   printf("The second small number is : %d\n",small2);
 return 0;
}
