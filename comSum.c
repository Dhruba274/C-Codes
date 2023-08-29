#include<stdio.h>
#include<stdlib.h>
int string_to_int(char *str){
    int i,x;
    for(x=0,i=0;str[i];i++){
        if (i==0 && str[i]=='-')
        i++;
        if(str[i]>='0'  && str[i]<='9'){
            x = x*10 + (str[i]-48); 
        }
        else 
        break;
    }
    if (str[0]=='-')
    x=-x;
    return (x);
}
int main(int argc, char *argv[])
{
    /* code */
  int i;
  int sum=0;
  for(int i=1;i<argc;i++){
    sum=sum+string_to_int(argv[i]);
  }
  printf("The sum is %d",sum);
    return 0;
}
