//Write a c program to following pattern:
//                      *
//                    *   *
//                  *   *   *
//                *  *   *    *

#include<stdio.h>
int main()
{
   int i,j,n;
   printf("Enter how many rows you want: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=1;j<=(n-i);j++)
         printf(" ");   
      for(j=1;j<=i;j++)
         printf("* ");  
      printf("\n");
   }
   return 0;
}