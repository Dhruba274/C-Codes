#include<stdio.h>
#include<string.h>
int main(){

char str[20];
int size,i;
int res=0;

printf("enter a string");
gets(str);
size=strlen(str);
for(i=0;i<size;i++){

if(str[i]==str[size-i-1]){
  res=1;
  break;
}
}

if(res==0){
    printf("The string is  palindrome");
}
else
printf("The string is not palindrome");




    return 0;
}