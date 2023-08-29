#include<stdio.h>
int main(){
int n;


printf("Enter a number ");
scanf("%d",&n);
for(int i=5;i>=n;i--){
      for(int j=i;j>=1;j-- ){

        printf("%c ",j+64);
      }

      printf("\n");

}



    return 0;
}