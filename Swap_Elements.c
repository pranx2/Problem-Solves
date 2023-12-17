//Write a code to swap elements of 3 variables using call by reference method.
//Code by ->[PRANTO]

#include<stdio.h>

int swap(int *p,int *q,int *r){
   int temp = *p;
   *p=*q;
   *q=*r;
   *r=temp;
   printf("p=%d q=%d r=%d\n",*p,*q,*r);
}
int main(int argc, char const *argv[])
{
   int a,b,c; 
   printf("Enter the value of 3 elements:\n");
      scanf("%d %d %d",&a,&b,&c);
         swap(&a,&b,&c);
            printf("a=%d b=%d c=%d\n",a,b,c);
   return 0;
}
