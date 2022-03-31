//write a program in C using goto statement

#include<stdio.h>
 int main()
 {
   int num;
   long fact = 1;
   printf("Enter a number: ");
   scanf("%d",&num);
   
   if(num<0) goto end;
   for(int i=1; i<=num; i++)
   fact = fact * i;
   printf("Factorial of %d is = %ld", num, fact);
   end:
   
   return 0;
 }