//write a program to find the average of three number

#include<stdio.h>
void main()
{
   int x, y, z;           //Declaring Three Variables
   float avg;
   printf("Enter Three Numbers : \n");    
   scanf("%d %d %d",&x, &y, &z);     //Input Numbers
 
   avg=(x+y+z)/3.0;                  //Calculating Average of three numbers
   printf("Average of Three Numebers is : %f", avg);    
   
}