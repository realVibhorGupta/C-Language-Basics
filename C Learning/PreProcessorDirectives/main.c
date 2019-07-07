#include <stdio.h>
#include <stdlib.h>
#include"macro.c"

#define VALUE 40
#define MESSAGE "hi  i am vibhor gupta"
#define CUBE(X) (X)*(X)*(X)

#define  SQUARE(X) (X)*(X)
#define CUBE1(X) (X)*SQUARE(X)//nesting of macros is done here
int main()
{
    int d=20;
    if(VALUE <d)
    {
    printf("Hello world!\n");
    }else{
    printf(MESSAGE);
    }

    printf("\nAnswer is :\t%d",CUBE(3+2));
    #undef CUBE();
     printf("\nAnswer is :\t %d",CUBE1(3+2));
     //printf(CUBE());this  will give an error

        #ifndef Z
            #define Z 200
        #else
            printf("\n Already defined");
        #endif // Z
         printf("\n%d",Z);


        #ifdef W
            #undef W
        #endif // W
         //printf("\n%d",W);

    return 0;
}
