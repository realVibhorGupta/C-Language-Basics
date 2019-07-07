

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


//here macros are defined
#define PI 3.14
#define MSG "HEllo"
#define SUM(a,b) a+b
#define PRODUCT(a,b) a*b

int main()
{
    int r;
    float a;
    printf("\nEnter the radius of the circle");
    scanf("%d",&r);
    a=PI*r*r;
    printf("\n%f",a);
    printf("\n%f",PI);
    printf("\nSum of 3 and 4 is: %d" ,SUM(3,4) );
    printf("\nSum of 3 and 4 is: %d" ,SUM(3-2,4-2) );
     printf("\nProduct of 3 and 4 is: %d" ,PRODUCT(3,4) );

     #undef SUM
     // printf("\nSum of 3 and 4 is: %d" ,SUM(3,4) );
    getch();
    return 0;
}
