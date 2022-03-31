/*write a program by using switch case if user enter 11 it will have are area of circle and when user enter 22 it wil have area of rectangle and when user enter 33 it will give area of square when user enter 44 it will give area of triangle*/

#include<stdio.h>
#include<math.h>
main(){
   int choice;
   printf("Enter\n11 for find area of Circle\n22 for finding area of Rectangle\n33 for finding area of Square\n44 for finding area of triangle\n");
   scanf("%d",&choice);
   switch(choice) {
       case 11: {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %f\n",area);
         break;
      }
        case 22: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %f\n",area);
         break;
      }
        case 33: {
         float side,area;
         printf("Enter Sides of Square\n");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %f\n",area);
         break;
      }
        case 44: {
         int a,b,c;
         float s,area;
         printf("Enter Three sides of triangle\n");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %f\n",area);
         break;
      }
        default: {
         printf("Invalid Choice\n");
         break;
      }
   }
}