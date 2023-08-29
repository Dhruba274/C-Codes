#include<stdio.h>
int factor(int n)
{
int i;
int fact=1;
for (i=1;i<=n;i++){

    fact =fact*i;
}
return fact;
}
int main(){
    int n;

printf("Enter a number to factorial");
scanf("%d",&n);
int fact=factor(n);
printf("%d",fact);



}