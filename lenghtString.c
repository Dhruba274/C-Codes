#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("Enter a string");
fgets(str,40,stdin);
puts("Length of the string");
int size =0;
int k=0;

while (str[k]!='\n')
{
    /* code */
    size++;
    k++;
}
printf("%d",size);






return 0;
}