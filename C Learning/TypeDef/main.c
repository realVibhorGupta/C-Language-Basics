#include <stdio.h>
#include <stdlib.h>
#include"main.c"
typedef struct {

    int rollno;
    char name[20];
    int age;


}STUDENT;



int main()
{

    STUDENT s1;

    s1.rollno=20;
    strcpy(s1.name,"vibhor");
    s1.age=20;

    printf("Hello world!\n");
    return 0;
}
