#include<stdio.h>
int combination(int n)
{
int fact=1;
for (int i=1;i<=n;i++){

fact=fact*i;
}
return fact ;
}

int main(){ 
int n,r,nCr;
printf("Enter the value of n and r");
scanf("%d%d",&n,&r);
nCr=combination(n)/(combination(r)*combination(n-r));
//nCr=combination(n); 
printf("The combination is %d",nCr);

//return 0; 
}


