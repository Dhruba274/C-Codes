#include <stdio.h>
int factor(int n){
    
    int fact=1;
    for (int i=1;i<=n;i++){
        
        fact=fact*i;
    }
    
    return fact;
    
    
}


int main () {
    // Write C code here
int n;
    printf("Enter a number to find factorial\t");
    scanf("%d",&n);
    int fact=factor(n);
    printf("%d", fact);

 //return 0;
}