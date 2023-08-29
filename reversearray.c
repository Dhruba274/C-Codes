#include<stdio.h>
void reverse(int a[]){
int i=0;
int j=4;
while (i<j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;

}

}

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
reverse(arr);
printf("\nShow the reverse elements in array\n");
for(int i=0;i<n;i++){
  printf("%d  ", arr[i]);

}

return 0;
} 