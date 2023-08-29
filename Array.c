#include<stdio.h>
int main(){
int arr[100];
int n;
printf("Enter the size of the array");
scanf("%d",&n);
printf("Enter the elements in array\n");
for(int i=0;i<n;i++){
  scanf("%d",&arr[i]);

}
printf("Show the elements in array\n");
for(int i=0;i<n;i++){
  printf("%d  ", arr[i]);

}
printf("Enter the revers elements in array\n");
for(int i=n-1;i>=0;i--){
  printf("%d ",arr[i]);

}




    return 0;
}