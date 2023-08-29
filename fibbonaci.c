#include<stdio.h>
int main(){
int num1=0, num2=1, sum, n;
printf("Enter a number to print the series:");
scanf("%d",&n);
printf("The fibbonaci series is %d %d ",num1,num2);
for (int i=2;i<n;++i){
  sum=num1+num2;
printf("%d ",sum);
num1=num2;
num2=sum;


}

    return 0;
}