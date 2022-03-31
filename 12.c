//write a program to take input of 5 subject, find total and calculate percent. On the basis of percent provide grade like:

#include<stdio.h>
#include<conio.h>

void main()
{  
   int a,b,c,d,e,total;
   float per;

   printf("enter your marks");
   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

   total=a+b+c+d+e;

   printf("\ntotal marks is %d\n",total);

   per=total*100/(5.0*100);

   printf("percent is %f\n",per);

   if(per>80)
    printf("A+");
   else{  if(per>=65&&per<=80)
             printf("A");
    else  { if(per>=50&&per <=65 )
                   printf("B");
      else {  if(per >= 42 && per <=50  )
                          printf("C");
       else
                 printf("Fail");
           }
       }
   }
  getch();
  return 0;
}