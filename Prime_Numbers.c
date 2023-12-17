//Write a C program to determine all prime numbers within the range [a to b] where a & b 
//are input through keyboard and print the addition value of all the prime numbers.
//Code By-> [PRANTO];
#include<stdio.h>
int main (){
    int s,e,i,j;
        printf("Enter the starting number : ");
        scanf("%d",&s);
        printf("Enter the Ending number : ");
        scanf("%d",&e);
for (int  i = s ; i <= e; i++)
{
            for ( j = 2 ; j<= i ; j++)
                    { 
                        if ( i%j == 0) 
                            {
                                break;
                            }
                    }
                        if (i == j)
                            {
                                printf("\nThe prime number is : %d ",j);
                            }             
}              

    return 0 ;                        
}