#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,*p,**q,***r;
     p=&x;
     q=&p;
     r=&q;
        **q=7;

        printf("%d\n",**q);

    printf("Hello world!\n");
    return 0;
}
