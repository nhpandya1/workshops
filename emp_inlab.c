#include <stdio.h>
#define SIZE 2

    
      struct employee{
        int id;
	int age;
	double salary;
    }; 
    struct employee emp[SIZE] = {{0,0,0},{0,0,0}};
int main() {   

        
	int option =1, count = 0, i;
	printf("---=== EMPLOYEE DATA ===---");
	printf("\n");
	
	while(option != 0)
	{
		printf("\n");
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n");
		printf("\n");
		printf("Please select from the above options: ");
		scanf("%d", &option);
		printf("\n");
	switch (option) {
		
           case 1:
	   printf("EMP ID  EMP AGE EMP SALARY\n");
	   printf("======  ======= ==========\n");
           for(i = 0;i < count; i++){
           
           printf("%6d%9d%11.2lf",emp[i].id, emp[i].age, emp[i].salary);
	   printf("\n");
	   }
	   break;
 
           case 2:
		
           
	    printf("Adding Employee\n");
	    printf("===============\n");
	    if(count == 2) {
		    printf("ERROR!!! Maximum Number of Employees Reached\n");
	    }
	    else
	    {
		printf("Enter Employee ID: ");
		scanf("%d", &emp[count].id);
		printf("Enter Employee Age: ");
		scanf("%d", &emp[count].age);
		printf("Enter Employee Salary: ");
		scanf("%lf", &emp[count].salary);
		count ++;
	}

	break;

	   case 0:

	   printf("Exiting Employee Data Program. Good Bye!!!\n");
	   printf("\n");
	   break;
    default:
	   printf("1. Display employee Information\n");
	   printf("2. Add employee\n");
	   printf("0. Exit\n");
	   printf("\n");
	   printf("Please select from the above options: ");
	   scanf("%d" ,&option);
	   printf("\n");
}}
    
return 0;
}
	
				



