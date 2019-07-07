#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int A[]={24,53,34,97,-88,-66};
    int i;
    bubble_sort(A,6);
    for(i=0;i<=5;i++)
    {

        //this loop will print the value
        printf("%d \t",A[i]);

    }
    getch();
}
void  bubble_sort(int A[],int N)
{
    int round,i,temp,flag;
    for(round=0;round<=N-1;round++)
    {
        flag=0;
        //traversal
        for(i=0;i<=N-1-round;i++)
        {
            //swapping
            flag=1;
            if(A[i]>A[i+1])
            {

                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;

            }
            if(flag==0)
            {


                return ;
            }
        }

    }

}
