#include<stdio.h>
#include<string.h>
int main(){
char str[40];
puts("Enter a string");
fgets(str,40,stdin);
puts("Length of the string");
int size =0;
int k=0;
int i,j;
while (str[k]!='\n')
{
    /* code */
    size++;
    k++;
}
printf("%d",size);

for(i=0,j=size-1;i<=j;i++,j--){

    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
puts("\nThe reverse string is");
puts(str);




return 0;
}