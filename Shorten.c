//20. Write a program in C to sort an array using a pointer.
//Code by -> [PRANTO]

#include<stdio.h>
int st(int *,int n);
int main(int argc, char const *argv[])
{
   int max;  
      printf("Enter the array size :");
      scanf("%d",&max); 
   int array[max];
      printf("Enter the array : ");
         for (int i = 0; i < max; i++)
         {
            scanf("%d",&array[i]);
         }
            st(array,max);
   return 0;
}
int st (int *a,int n){
   int temp;  
   for (int i = 0; i < n; i++)
            {
               for (int j =i+1; j < n; j++)
               {
                  if (*(a+i) > *(a+j))
                  {
                     temp = *(a+i);
                     *(a+i) = *(a+j);
                     *(a+j) = temp;
                  }
               }    
            }
            printf("Array  is: ");
         for (int i = 0; i < n; i++)
         {
            printf("%d\t",*(a+i));
         }
}