#include<stdio.h>
#include<string.h>
int main(){
char str[20];
int size=0,i=0;
puts("Enter a string ");
fgets(str,20,stdin);
while (str[i]!='\n')
{
    size++;
    i++;
}
printf("The length of the string is %d",size);









    return  0;
}