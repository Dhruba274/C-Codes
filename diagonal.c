#include<stdio.h>
int main(){
int arr[100][100];
int r,c;
printf("Enter the row number:");
scanf("%d",&r);
printf("Enter the coloumn number:");
scanf("%d",&c);
printf("Enter the elements in 2D array:\n");
for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){

        scanf("%d",&arr[i][j]);
    }
}
if(r==c){
for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        if(i==j){
            printf("%d\t",arr[i][j]);
        }
        else printf(" ");
    }
printf("\n");

}
}
else printf("\nThe matrix is not square");
    return 0;
}