#include<stdio.h>
#include<string.h>
int main()
{
typedef struct employee{

char name[15];
int age;
double salary;
int emp_id;



}employee;

employee arr[3];
int i;
 for( i=0;i<3;i++){
        printf("Enter the name\n");
        scanf("%s",arr[i].name);
        printf("Enter age\n");
        scanf("%d",&arr[i].age);
       printf("Enter the salary\n");
        scanf("%d",&arr[i].salary);
       printf("Enter the Emp Id\n");
        scanf("%f",&arr[i].emp_id);

    }
    for( i=0;i<3;i++){
        printf("The name of the employer :%s\n",arr[i].name);
    
       printf("Age :%d\n",arr[i].age); 
       printf("Salary :%d\n",arr[i].salary);
       printf("Emplyee ID :%f\n",arr[i].emp_id);
        printf("\n");

    }






    return 0;
}