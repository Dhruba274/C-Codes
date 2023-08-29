#include<stdio.h>
void binary(int n){
    int bin[32],i=0;
    while (n!=0)
    {
       bin[i]=n%2;
       n=n/2;
       i++;
    }
    // printing the binary array in reverse order
    for(int j=i-1;j>=0;j--)
    printf("%d",bin[j]);
    

}


int main(){

    int n;
    printf("Enter a number=\n");
    scanf("%d",&n);
    binary(n);
    

    return 0;
}