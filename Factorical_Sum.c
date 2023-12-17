
//Write a program to find the sum of the given series using the function.
//EX:1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5+. . +n!/n
//Code By -> [PRANTO]

#include<stdio.h>
int fact(int n);
int main(int argc, char const *argv[])
{
  int limit;
  printf("Enter the last limit of number : ");
  scanf("%d",&limit);
fact(limit);
 return 0;
}

int fact(int n){
 int sum=0 , fact, num=1;
  while (num <= n )
  {
   fact=1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nThe %d of factorial is :%d ",num,fact);
    sum = sum + (fact/num);
    num++;
  } 
    printf("\nThe number of  sum is %d\n",sum);
}