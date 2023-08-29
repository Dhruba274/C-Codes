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
printf("Show the elements in 2D array:\n");
for (int i=0;i<r;i++){
    for(int j=0;j<c;j++){

        printf("%d",arr[i][j]);
    }
    printf("\n");
}

printf("\nTranspose of matrix\n");
for (int i=0;i<c;i++){
    for(int j=0;j<r;j++){
        printf("%d",arr[j][i]);
    }
    printf("\n");

}


    return 0;
}