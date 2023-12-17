
//Write a program to check Armstrong and Perfect numbers using the function.
//Code by-> [PRANTO]
#include<stdio.h>
int arms(int n );
int perfect(int n);
int main(int argc, char const *argv[])
{
  int n;
printf("Enter the number :");
scanf("%d",&n);
arms(n);
perfect(n);
 return 0;
}
int arms(int n){ 
int t=0,r,o;
o=n;
  while (n>0)
  {
    r=n%10;
    t=(r*r*r)+t;
    n=n/10;
  }
  printf("\nThe number is : %d\n",o);
  if (o==t)
  {
    printf("\nThe number is Armstrong number.\n");
  }
  else
  {
   printf("\nThe number is a perfect number.\n");
  }
  return 0;
}
int perfect(int n){
 int rim,sum=0,o=n;
 for (int i = 1; i < n; i++)
 {
     rim=n%i;
     if (rim == 0)
     {
        sum= sum + i;
     }
 }
 if (sum == o)
 {
  printf("The number is perfect.\n The number is %d:",sum);
 }
 else{
  printf("The number is not perfect");
 }
}