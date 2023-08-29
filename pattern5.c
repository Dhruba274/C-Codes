#include<stdio.h>
int main(){
int n;
int a=65;

printf("Enter a number ");
scanf("%d",&n);
for(int i=5;i>=n;i--){
      for(int j=1;j<=i;j++){

        printf("%c ",a++);
      }

      printf("\n");

}



    return 0;
}