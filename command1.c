#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    printf("The value of argc is %d\n",argc);/*The name of the programme file is always first arguments of the programmme.Other arguments can be passed while compiling the code. It wikll print the argument number*/
    for (int i=0;i<argc;i++)
    {
        printf("The argument at index %d has a value of %s\n",i,argv[i]);

    }
    return 0;
}
