/*Write a c program to following pattern:
            A
            A   B
            A   B   C                 */

#include<stdio.h>  
int main()   
{   
  int row, col;  
  for( row = 65; row <=67;row++)
  {
  	for(col=65 ; col<=row; col++)
	   printf("%c ",col);   
  	printf("\n");
  }
  return 0;
}  