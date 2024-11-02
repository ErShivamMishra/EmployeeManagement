//dashboard page...
#include<string.h>

struct Employee
{
int id,age;
float salary;
char name[25],gender[20],branch[20];	
};
//....sub function inside shorting functon...............
void empid(struct Employee [], int count );
void EmpName(struct Employee [], int count );
void salary(struct Employee [], int count );
//....sub function inside shorting functon...............
void ShortRecord(struct Employee [], int count );
void DisplayRecord(struct Employee [], int count );
int UpdateRecord(struct Employee [], int count );
int DeleteRecord(struct Employee [], int count );
int SearchRecord(struct Employee [], int count );
void FilterRecord(struct Employee [], int count );
void dashboard()
{
	struct Employee emp[100];
	int ch,res;
	int x,count=0;
	char reply='y';
	while(1)
	{
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
		printf("\033[36m******************* Employee Dashboard *****************\033[0m");
		gotoxy(65,15);
		printf("1. Add Records");
		gotoxy(65,17);
		printf("2. List Records");
		gotoxy(65,19);
		printf("3. Update Records");
		gotoxy(65,21);
		printf("4. Delete Records");
		gotoxy(65,23);
		printf("5. Search Records");
		gotoxy(65,25);
		printf("6. Filter Records");
		gotoxy(65,27);
		printf("7. Sorted Records");
		gotoxy(65,29);
		printf("8.Back");
		gotoxy(65,31);
		printf("9. Exit ");
		gotoxy(65,34);
		printf("Enter your choice ");
		fflush(stdin);
		scanf("%d",&ch);
		printf("%d",ch);		
		switch(ch)
		{
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
           	    printf("Enter Employee record:\n");
        	    while(reply!='n')
	           {
	            	printf("Employee id:");
		            scanf("%d",&emp[count].id);
		         	printf("Enter name: ");
					fflush(stdin);
					gets(emp[count].name);
					printf("Enter age: ");
					scanf("%d",&emp[count].age);
					printf("Enter Branch: ");
					fflush(stdin);
					gets(emp[count].branch);
					printf("Enter Gender: ");
					fflush(stdin);
					gets(emp[count].gender);
					printf("Enter Salary: ");
					scanf("%f",&emp[count].salary);
					printf("\n");
					printf("Do You Want Add more Employee (y/n):");
					fflush(stdin);
					scanf("%c",&reply);
					count++;
				}
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
				   DisplayRecord(emp, count );
				   printf("\n\nPress any key to go back...");
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
				   reply='y';
				   UpdateMore:
				   res=UpdateRecord(emp, count );
	               if(res== -1)
			      {
					 	printf("\033[31m\nInvalid Employee id try again.. \033[0m");
	              }
	               else
                  {
	 	             printf("Enter updated name: ");
		    		 fflush(stdin);
					 gets(emp[res].name);
					 printf("Enter updated age: ");
		             scanf("%d",&emp[res].age);
                     printf("Enter updated Branch: ");
		             fflush(stdin);
					 gets(emp[res].branch);
		             printf("Enter updated Gender: ");
		             fflush(stdin);
					 gets(emp[res].gender);
					 printf("Enter Salary: ");
		             scanf("%f",&emp[res].salary);
		        	 printf("\n");
		             printf("\nEmployee Details are updated successfully.");
	   	
                	}
                	printf("\n");
					printf("Do You Want update more Employee (y/n):");
					fflush(stdin);
					scanf("%c",&reply);
					if(reply=='y')
					   goto UpdateMore;
				    printf("\n\nPress any key to go back...");
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
				   reply='y';
				   DeleteMore:
				   res=DeleteRecord(emp, count );
	               if(res== -1)
	               {
		               printf("\nInvalid Employee id try again.");
	               }
	               else
	               {
		               if(res==count-1)
	   	                   count--;
	   	               else
		               {      
	                      for(x=res;x<count;x++)
	                     {
	   	                      emp[x].id=emp[x+1].id;
			  				  strcpy(emp[x].name,emp[x+1].name);
			  				  emp[x].age=emp[x+1].age;
			  				  strcpy(emp[x].branch,emp[x+1].branch);
			  				  strcpy(emp[x].gender,emp[x+1].gender);
			  				  emp[x].salary=emp[x+1].salary; 
			  
			  				  if(x==count-1)
	   	        				 count--;   
	      				 }
					   }
	    			   printf("\n");
					   printf("\nEmployee Details are deleted successfully.");
	    	
	                 }
	                printf("\n");
					printf("Do You Want update more Employee (y/n):");
					fflush(stdin);
					scanf("%c",&reply);
					if(reply=='y')
					   goto DeleteMore;
					 printf("\n\nPress any key to go back...");
				     getch();
				     break;
			 case 5:
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
				   res=SearchRecord(emp, count );
	               if(res== -1)
	               {
						printf("\nInvalid Employee data try again.");
					}
					else if(res==count+2)
					{
						printf("\nInvalid Choice press any key to try again..");
					}
	
					else
					{
		    
	    				printf("id\t  Name\t Age\t Gender\t Branch\t Salary\n");
	      
	    				printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[res].id,emp[res].name,emp[res].age,emp[res].branch,emp[res].gender,emp[res].salary);
	    				printf("\n");
						printf("\nEmployee Details are Searched successfully.");
	    	
					}
					printf("\n\nPress any key to go back...");
				    getch();
				    break;
			case 6:
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
				   FilterRecord(emp, count );
				   printf("\n\nPress any key to go back...");
				   getch();
				   break;		
		    case 7:
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
				   ShortRecord(emp, count );
				   printf("\n\nPress any key to go back...");
				   getch();
				   break;
		    case 8:
				    goto goback;
				    break;			   
		    case 9:
				    exit(0);
				    break;		   				   		 		    				   
			default:
			     printf("\ndefault.");
				 break;	
		}
	}
	
	////////////go back..................
	  goback:
	  	   gotoxy(45,36);
	  	  printf("Press any key to goback");
	
}

//...............................Show records...........................
void DisplayRecord(struct Employee emp[], int count )
{
    int x;
    printf("\n");
	printf("Record of Employee:\n");
		printf("\n");
	printf("id\t   Name\t Age\t Gender\t Branch\t Salary\n");
	for(x=0;x<count;x++)
	{

	   printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[x].id,emp[x].name,emp[x].age,emp[x].branch,emp[x].gender,emp[x].salary);
	}
		
}

//.............................update record.................
int UpdateRecord(struct Employee emp[], int count )
{
	int x;
	int id;
	printf("\nUpdate Records:- ");
	printf("\n\nEnter Employee Id whose record will be updated: ");
	scanf("%d",&id);
	for(x=0;x<count;x++)
	{
		if(emp[x].id==id)
		   break;
	}
	if(x==count)
	{
		return -1;
	}
	else
	{
	 	return x; 	
	}
}

//....................delete record.............
int DeleteRecord(struct Employee emp[], int count )
{
	int x;
	int id;
	printf("\nDelete Records:- ");
	printf("\nEnter Employee Id whose record will be deleted: ");
	scanf("%d",&id);
	for(x=0;x<count;x++)
	{
		if(emp[x].id==id)
		   break;
	}
	if(x==count)
	{
		return -1;
	}
	else
	{
	 	return x; 	
	}
}


//....................Search record...............
int SearchRecord(struct Employee emp[], int count )
{
	int x;
	int id,ch;
	char Ename[25];
	printf("\nSearch Records...");
	printf("\n1. Search by Employee Id.");
	printf("\n2. Search by Employee Name.\n");
	printf("\nEnter your choice ");
	fflush(stdin);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter Employee Id whose record will be searched: ");
	        scanf("%d",&id);
	        for(x=0;x<count;x++)
	        {
		       if(emp[x].id==id)
		          break;
	        }
	        if(x==count)
	        {
		       return -1;
	        }
	        else
	        {
	 	      return x; 	
	        }
	        break;
	    case 2:
			printf("\nEnter Employee Name whose record will be searched: ");
			fflush(stdin);
	        gets(Ename);
	        for(x=0;x<count;x++)
	        {
		       if(strcmp(emp[x].name,Ename)==0)
		          break;
	        }
	        if(x==count)
	        {
		       return -1;
	        }
	        else
	        {
	 	      return x; 	
	        }
	        break;
		default:
			return count+2;	    
			
	}
	
}

//.........................filter record...............................

void FilterRecord(struct Employee emp[], int count )
{
	int choice,i;
	char z;
	restart:
    // Menu for filtering options
    printf("\nFilter Options:\n");
    printf("1. Filter by Name\n");
    printf("2. Filter by Age\n");
    printf("3. Filter by Gender\n");
    printf("4. Filter by Branch\n");
    printf("5. Filter by Salary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the name to filter by: ");
            char filterName[50];
            fflush(stdin);
            gets(filterName);
            printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
            for (i = 0; i < count; i++) {
                if (strcmp(emp[i].name, filterName) == 0) {
	                printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
	
                }
            }
            break;
        case 2:
            printf("Enter the Age to filter by: ");
            int filterAge;
            scanf("%d", &filterAge);
            printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
            for (i = 0; i < count; i++) {
                if (emp[i].age == filterAge) {
                    printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
                }
            }
            break;
        case 3:
            printf("Enter the gender to filter by: ");
            char filterGender[10];
            scanf(" %s", &filterGender);  // Use a space to consume newline character
            printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
            for (i = 0; i < count; i++) {
                if (strcmp(emp[i].gender, filterGender)==0) {
                     printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
                }
            }
            break;
        case 4:
            printf("Enter the branch to filter by: ");
            char filterBranch[50];
            scanf("%s", filterBranch);
            printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
            for (i = 0; i < count; i++) {
                if (strcmp(emp[i].branch, filterBranch) == 0) {
                     printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
                }
            }
            break;
        case 5:
            printf("Enter the Salary to filter by: ");
            float filterSalary;
            scanf("%f", filterSalary);
            printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
            for (i = 0; i < count; i++) {
                if (emp[i].salary== filterSalary) {
                     printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
                }
            }
            break;
        default:
            printf("Invalid choice!\n");
    }
    printf("search another(Y/N):");
    fflush(stdin);
    scanf("%c",&z);
    if(z=='Y'|| z=='y')
    {
    	goto restart;
	}
}

//.....................short record.............................
void ShortRecord(struct Employee emp[], int count )
{
	int ch;
   printf("=============================\n");
		printf("\n 1:Employee ID");
		printf("\n 2:Employee Name");
		printf("\n 3:Employee salary");
		printf("\n 4:Exit");
		printf("\n=============================");
		printf("\n Enter Your choice");
		scanf("\n %d",&ch);
		switch(ch)
		{
			case 1:
				empid(emp, count);
				break;
			case 2:
				EmpName(emp, count);
				break;
			case 3:
				salary(emp, count);
				break;
			default:
				 printf("\nInvalid choice ...");
				break;
			}
}
void empid(struct Employee emp[], int count)
{
	int i,j,temp;
	//printf("\nEnter employee id number");
//	for(i=0;i<5;i++)
//	{
//		scanf("%d",&id[i]);
//	}
	
	for(i=0;i<count;i++)
	{
		for(j=0;j<count;j++)
		{
			if(emp[j].id>emp[i].id)
			{
				//swapping
				temp=emp[i].id;
				emp[i].id=emp[j].id;
				emp[j].id=temp;
			}
		}
	}
	printf("The sorted order of number ID \n");
	printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
	for(i=0;i<count;i++)
	 printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
	}
void EmpName(struct Employee emp[], int count)
{
	int i,j;
	char x[50];
   //char str[100][100],x[100];
   // printf("Enter number of names :\n");
//  scanf("%d",&num);
//   printf("Enter names in any order:\n");
//   for(i=0;i<num;i++){
//      scanf("%s",&str[i]);
//   }
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(strcmp(emp[i].name,emp[j].name)>0){
            strcpy(x,emp[i].name);
            strcpy(emp[i].name,emp[j].name);
            strcpy(emp[j].name,x);
         }
      }
   }
   printf("\nThe sorted order of names :\n");
   printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
   for(i=0;i<count;i++){
       printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
   }
}

void salary(struct Employee emp[], int count)
{
//	float s[10000];
	int i,j;
	float temp;
/*	printf("Enter the size of salary");
//	scanf("%d",&n);
	//printf("Enter the salary");
	//for(i=0;i<num;i++)
	//{
		scanf("%d",&num[i]);
	}*/
	for(i=0;i<count;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if(emp[i].salary>emp[j].salary)
			{
				temp=emp[i].salary;
				emp[i].salary=emp[j].salary;
				emp[j].salary=temp;
			}
		}
	}
	printf("The sorted order of salary\n");
	printf("\nid\t  Name\t Age\t Gender\t Branch\t Salary\n");
	for(i=0;i<count;i++)
	{
		 printf("%d\t %s\t %d\t %s\t %s\t %f\n",emp[i].id,emp[i].name,emp[i].age,emp[i].branch,emp[i].gender,emp[i].salary);
	}
	}



	

