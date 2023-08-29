#include<stdio.h>
#include<string.h>
int main(){
char text1[20],text2[20];
char *str1=text1;
char *str2=text2;
printf("Enter a string");
gets(text1);

while (*str2++=*(str1++));

printf("Fisrt string is %s\n",text1);
printf("Second string is %s\n",text2);



    return 0;
}