#include <stdio.h>
#include <stdlib.h>
 
typedef struct{
    char name[30];
    int id,age,phoneno;
    double salary;
} Employee;
 
int main()
{
    int n=20;

    Employee employees[n];
 
    printf("Enter %d Employee Details \n \n",n);
    for(int i=0; i<n; i++){
        printf("Employee %d:- \n",i+1);

        printf("Name: ");
        scanf("%[^\n]s",employees[i].name);

        printf("Id: ");
        scanf("%d",&employees[i].id);

        printf("Age: ");
        scanf("%d",&employees[i].age);
        
        printf("Phone no: ");
        scanf("%d",&employees[i].phoneno);

        printf("Salary: ");
        scanf("%lf",&employees[i].salary);

        char ch = getchar();
 
        printf("\n");
    }
 
    printf("-------------- All Employees Details ---------------\n");
    for(int i=0; i<n; i++){
        printf("Name \t: ");
        printf("%s \n",employees[i].name);
 
        printf("Id \t: ");
        printf("%d \n",employees[i].id);
        
        printf("Age \t: ");
        printf("%d \n",employees[i].age);
        
        printf("Phoneno\t: ");
        printf("%d \n",employees[i].phoneno);
 
        printf("Salary \t: ");
        printf("%.2lf \n",employees[i].salary);
 
        printf("\n");
    }
 
    return 0;
}
