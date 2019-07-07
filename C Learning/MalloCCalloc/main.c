#include <stdio.h>
#include <stdlib.h>
#include<conio.h>



int main()
{
    int *a;


	float *c;
    int x[5];
	float d=3.484530;


	//MALLOC FUNCTION
	c=(float*)malloc(4);


	//CALLOC FUNCTION
	a=(int*)calloc(5,2);
	*c=3.484530;
	printf("\nthe value of c\t%f",*c);
	printf("\nthe value of d\t%f",d);



	*(a+0)=23;
	*(a+1)=223;
	*(a+2)=123;
	*(a+3)=233;
	*(a+4)=234;
    printf("\n the value of calloc is\n%d\n%d\n%d\n%d\n%d\n", *(a+0),*(a+1), 	*(a+2),*(a+3),*(a+4) );
	printf("\n the value of calloc is\n%d\n%d\n%d\n%d\n%d\n", a[0] );
	//REALLOC EXAMPLE
    double *q;
    q=realloc(c,6);
	*q=23.4253254;
	printf("\nthe value of realloc is: %f " , *q);


	//FREE FUNCTION
	free(q);
	free(c);

	printf("\nthe value of c\t%f",*c);//this will give garbage value
	printf("\nthe value of realloc is: %u " , *q);
	//this print statement shows that the memory related to the variables have been released
	getch();
    return 0;
}
