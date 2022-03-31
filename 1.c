//write a program in which to declare all data type like integer, double, float, long int and print value in specified format 

#include<stdio.h>
#include<conio.h>
void main()
{  int a;
   long int d;
   double b;
   float c;
   printf("enter the value of a,b,c and d ");
   scanf("%d %lf %f %d",&a,&b,&c,&d);
   printf("value of a=%d b=%lf c=%f d=%d",a,b,c,d);
   getch();
}