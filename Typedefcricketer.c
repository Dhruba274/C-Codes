#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer
    {
        /* data */
        char name[30];
        int age;
        int NoOfMatches;
        float average;
    }cricketer;
    
    cricketer arr[5];

    for(int i=0;i<5;i++){
        printf("Enter the name\n");
        scanf("%s",arr[i].name);
        printf("Enter age\n");
        scanf("%d",&arr[i].age);
       printf("Enter the No of matches\n");
        scanf("%d",&arr[i].NoOfMatches);
       printf("Enter the average\n");
        scanf("%f",&arr[i].average);

    }
    for(int i=0;i<5;i++){
        printf("The name of the Cricketer :%s\n",arr[i].name);
    
       printf("Age :%d\n",arr[i].age); 
       printf("No of matches played :%d\n",arr[i].NoOfMatches);
       printf("Average :%f\n",arr[i].average);
        printf("\n");

    }






    return  0;
}