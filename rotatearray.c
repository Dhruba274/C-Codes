#include<stdio.h>
void reverse(int a[],int si,int ei){

for (int i=si,j=ei;i<j;i++,j--)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    
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
reverse(arr,2,4);
printf("\nRevesre the elements in array in  fix part index\n");
for(int i=0;i<n;i++){
  printf("%d  ", arr[i]);

}
reverse(arr,1,3);
printf("\nRevesre the elements in array in  fix part index\n");
for(int i=0;i<n;i++){
  printf("%d  ", arr[i]);

}

return 0;
} 



