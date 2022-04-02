/*write a program to following patern:
                A
                B   C
                D   E   F
                G   H   I   J                    */

#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    char ch='A';
    
    for(i=1;i<=4;i++)
{
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
}
getch();
}