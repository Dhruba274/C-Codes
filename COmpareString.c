#include<stdio.h>
#include<string.h>

int compare(char *str1,char *str2){

int i=0;
while (str1[i]==str2[i])
{
    if(str1[i]=='\n'&& str2[i]=='\n')
    break;

    i++;
}
return str1[i]-str2[i];


}

int main(){

char str1[20],str2[20];
printf("Enter first string ");
gets(str1);
printf("Enter second string ");
gets(str2);

int res=compare(str1,str2);
if (res==0){

printf("Both string are equal");
}

else if(res<0)
{
printf("first string is smaller than second");
}
else{ 
printf("Second string is smaller than first");
}




    return 0;
}