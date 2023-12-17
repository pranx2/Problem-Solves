//Write a C program to finds the Fibonacci series of n terms using recursion.
//Code By -> [PRANTO]

#include<stdio.h>
int fibo(int n);

 int main() {
  int n,i;
  printf("Enter the number:");
  scanf("%d",&n);
  for (i = 0 ; i < n ; i++)
  {
  printf("\t%d",fibo(i));
  }
return 0;
}

int fibo (int n){
 if (n==0)
 {
return 0;
 }
 else if (n==1)
 {
  return 1;
 }
 else
 {
   return fibo(n-1) + fibo(n-2);
 }
}