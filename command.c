#include<stdio.h>
int main(int argc,char const *argv[])
{
    printf("argc is %d\n",argc);/*The name of the programme file is always first arguments of the programmme.Other arguments can be passed while compiling the code. It wikll print the argument number*/ 
    if (argc>=2)
    {
        printf("The arguments supplied are :\n");
        for(int i=1 ;i<=argc;i++)
        {
            printf("%s\t", argv[i]);

        }
    }


    return 0;
}
