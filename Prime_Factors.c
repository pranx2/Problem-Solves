// A prime integer is entered through the keyboard. Write a code to find out the prime factors 
//of the number.
//Code by-> [PRANTO]

#include<stdio.h>
int main (){
    int n;
        printf("Enter the prime number : ");
        scanf("%d",&n);
for (int  i = 1 ; i <= n; i++)
{
                        if ( n%i == 0) 
                            {
                            printf("The factors is :%d\n",i);    
                            }       
}       
    return 0 ;                        
}