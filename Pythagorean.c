
//Write a C program to determine all Pythagorean triplets within a given range between 1 to 
//Code By -> [PRANTO]

#include<stdio.h>
#include<math.h>
#define max_value 1-1000
int main(){
int a,b; 
float c;
printf("Enter the value of first number: ");
scanf("%d",&a);
printf("Enter the value of second number: ");
scanf("%d",&b);
printf("The number is  Pythagorean triplets :");
    for (int i = a ; i <=b; i++)
    {
     for (int j = i; j <=b; j++)
     {
       c=sqrt(i*i + j*j );
       if (c == (int)c)
       {
        printf("\n a=%d b=%d c=%d",i,j,(int)c);
       }
     }
     
    }
 return 0;   
}
