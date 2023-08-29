#include<stdio.h>
#include<string.h>
int main(){
char str1[20],str2[20];
char *txt1=str1;
char*txt2=str2;

printf("Enter first String");
gets (str1);
printf("Enter first String");
gets (str1);

while (*(++txt1))

while(*(txt1++)==*(txt2++));

printf("Concated string is %s",str1);







return 0;
}