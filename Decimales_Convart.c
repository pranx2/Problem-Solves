// Write a C program to convert a decimal number into correspondent binary number using 
//recursion where decimal number is input from user
//Code By -> [PRANTO]
#include<stdio.h>
void deci(int n){
  if (n== 0)
  {
    printf("0");
  }
  else{
    deci(n/2);
    printf("%d",(n%2));
  }
}
int main(int argc, char const *argv[])
{ 
int n;
printf("Enter the number :");
scanf("%d",&n);
deci(n);
 return 0;
}
