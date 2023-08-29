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


for (int i=0,j=n-1;i<j;i++,i--)
{
          if(arr[i]==arr[j])
          
 printf("\n The array is palindrome");
 
else 
printf("\nThe array is not a palindrome");
  break; 
}





    return 0;
}