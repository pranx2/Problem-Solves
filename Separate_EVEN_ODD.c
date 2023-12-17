


//Write a C code to separate even and odd elements in an array.
//Code by-> [PRANTO]
#include<stdio.h>
#define MAX_SIZE 100 

int ODD (int a[],int size );
int EVEN (int a[],int size);

int main(int argc, char const *argv[])
{
  int size;
    printf("Enter your array size :");
      scanf("%d",&size);
   int array[MAX_SIZE];
      printf("Enter your array Numbers :");
         for (int i = 0; i < size ; i++)
            {
               scanf("%d",&array[i]);
            }
             
  EVEN(array,size);
  printf("\t");
  ODD(array,size);   
 return 0;
}
    int ODD(int array[],int size){
      printf("ODD number is : ");
       for (int i = 0; i < size;i++){
        if (array[i]%2 != 0){
          printf("%d,",array[i]);
          }
       }
    }
    int EVEN (int array[],int size){
      printf("EVEN number is : ");
      for (int i = 0; i < size;i++)
    {
        if (array[i]%2 == 0){
          printf("%d,",array[i]);
         }
    }
    }
        
        
