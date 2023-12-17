//Write a program in C to print all permutations of a given string using pointers.
//Code By-> [Pranto]

#include<stdio.h>
#include<string.h>
int main (){
 char str[100];
 printf("Enter the string");
 gets(str);
int n;
n=strlen(str);
printf("The possible permutation is :\n");
perm(str,0,n-1);
return 0;
}
void perm(char *s ,int  a, int n){
 int j;
 if (a==n)
 {
   printf("%s\n",s);
 }
 else{
  for (j = a; j <= n; j++)
  {
   swap ((s+a),(s+j));
   perm(s,a+1,n);
   swap((s+a),(s+j));
 }
}
}
void swap (char *c1 ,char *c2){
 char temp;
  temp=*c1;
  *c1=*c2;
  *c2=temp;
}