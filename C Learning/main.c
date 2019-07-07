

#include<stdio.h>

#define PI 3.14//where PI is a macro
#define MSG "HEllo"

int main()
{
    int r;
    float a;
    printf("Enter the radius of the circle");
    scanf("%d",&r);
    a=PI*r*r;
    printf(PI);
    getch();
    return 0;
}
