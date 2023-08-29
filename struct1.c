#include<stdio.h>
#include<string.h>
int main(){

    struct book
    {
        char name[50];
        int price;
        int page;
        

    }a,b,c;
    
   strcpy(a.name,"Gitanjali");
   a.page=700;
   a.price=450;
   printf("The price of book is %d\n",a.price);
   printf("The name of book is %s",a.name);
    
    







    return 0;
}