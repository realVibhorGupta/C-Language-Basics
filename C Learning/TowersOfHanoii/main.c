#include <stdio.h>
#include <stdlib.h>




void TowerOfHanoi(int n,char beg,char aux char end )
{
    if(n>=1)
    {
        TowerOfHanoi(n-1,beg,end,aux);
        printf("%c to %c\n" , beg,end);
        TowerOfHanoi(n-1,aux,beg ,end);

    }

}



int main()
{
    return 0;
}
