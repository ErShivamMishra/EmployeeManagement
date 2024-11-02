//................Financial Management...........................

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

// Define a structure to represent an employee
struct Employee_Sal {
    int id;
    char name[50];
    double salary;
};



// Function to display employee salary
void displaySalary(struct Employee_Sal employees[], int numEmployees) {
	int i ;
    printf("\n=== Employee Salaries ===\n");
    printf("ID\tName\tSalary\n");
    for (i= 0; i < numEmployees; i++) {
        printf("%d\t%s\t%.2lf\n", employees[i].id, employees[i].name, employees[i].salary);
    }
    printf("\n");
}

// Function to add a new salary record
void addSalary(struct Employee_Sal employees[], int* numEmployees) {
    printf("Enter employee ID: ");
    scanf("%d", &employees[*numEmployees].id);
    printf("Enter employee name: ");
    scanf("%s", employees[*numEmployees].name);
    printf("Enter employee salary: ");
    scanf("%lf", &employees[*numEmployees].salary);
    
    (*numEmployees)++;
    printf("Salary record added successfully.\n");
}

// Function to update an existing salary record
void updateSalary(struct Employee_Sal employees[], int numEmployees) {
    int id;
    int i;
    printf("Enter employee ID to update: ");
    scanf("%d", &id);

    for (i = 0; i < numEmployees; i++) {
        if (employees[i].id == id) {
            printf("Enter new salary: ");
            scanf("%lf", &employees[i].salary);
            printf("Salary updated successfully.\n");
            return;
        }
    }
    
    printf("Employee with ID %d not found.\n", id);
}

// Function to delete a salary record
void deleteSalary(struct Employee_Sal employees[], int* numEmployees) {
    int id;
    int i;
    int j;
    printf("Enter employee ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < *numEmployees; i++) {
        if (employees[i].id == id) {
            // Shift all elements after this position one step back
            for (j = i; j < (*numEmployees - 1); j++) {
                employees[j] = employees[j + 1];
            }
            (*numEmployees)--;
            printf("Salary record deleted successfully.\n");
            return;
        }
    }
    
    printf("Employee with ID %d not found.\n", id);
}

void FinanceRecord() {
    struct Employee_Sal employees[100]; // Assuming a maximum of 100 employees
    int numEmployees = 0;
    
        int choice;
        while (1) {
           	system("cls");
        	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
             printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
             printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
             printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
             printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
             printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
	       	gotoxy(60,12);
	    	printf("\033[36m******************* Finance Dashboard *****************\033[0m");
		    gotoxy(65,15);
            printf("1. Display salaries");
            gotoxy(65,17);
            printf("2. Add salary record\n");
            gotoxy(65,19);
            printf("3. Update salary record\n");
            gotoxy(65,21);
            printf("4. Delete salary record\n");
            gotoxy(65,23);
		    printf("5.Back");
            gotoxy(65,25);
            printf("6. Exit\n");
            gotoxy(65,27);
            printf("Enter your choice: ");
            scanf("%d", &choice);
            
            switch (choice) {
                case 1:
                    system("cls");
                	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
    printf("\n\n");
                    displaySalary(employees, numEmployees);
                    getch();
                    break;
                case 2:
                    system("cls");
                	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
    printf("\n\n");
                    addSalary(employees, &numEmployees);
                    getch();
                    break;
                case 3:
                    	system("cls");
                	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
    printf("\n\n");
                    updateSalary(employees, numEmployees);
                    getch();
                    break;
                case 4:
                    system("cls");
                	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
    printf("\n\n");
                    deleteSalary(employees, &numEmployees);
                    getch();
                    break;
                case 5:
				    goto goback;
				    break;	    
                case 6:
                    printf("Goodbye!\n");
                    exit(0);
                default:
                    printf("Invalid choice. Please try again.\n");
            }
        }
       	////////////go back..................
	   goback:
	  	   gotoxy(45,36);
	  	  printf("Press any key to goback");
    
}
