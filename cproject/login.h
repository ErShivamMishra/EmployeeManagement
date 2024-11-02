//Login page.....
#include "dashboard.h"
#include "financeRecord.h"
//#include "finance.h"
#include "developer.h"


//////////    Main function........................
void login()
{
	system("color 0F");
	int ch,res;
	char retry='y';
	 while(retry!='n')
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
	   gotoxy(70,13);
	   printf("\033[36m***********Login As***********\033[0m");
	   gotoxy(73,16);
	   printf("1. For Employee");
	   gotoxy(73,18);
	   printf("2. For Financial");
	   gotoxy(73,20);
	   printf("3. Developers");
	   gotoxy(73,22);
	   printf("4. Exit");
	   gotoxy(73,25);
	   printf("Enter your Choice:  ");
	   scanf("%d",&ch); 
		
	    switch(ch)
	   {
		   case 1:
			  system("cls");
			  res=LoginEmployee();
			  if(res==1)
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
		    	gotoxy(65,13);
		    	printf("\033[36m################# Welcome to Employee Zone #################\033[0m");
		    	dashboard();
			  }
			   else
			  {
			     	printf("\033[31m Invalid username or password \033[0m");	
			  }
			  break;
	        case 2:
			   system("cls");
			    res=LoginFinancial();
			    if(res==1)
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
		    	  gotoxy(55,17);
		    	  printf("\033[36m################## Welcome to Financial Zone #################\033[0m");
		    	// finance();
		    	FinanceRecord();
			   }
			   else
			   {
				  gotoxy(65,23);
			      	printf("\033[31m Invalid username or password \033[0m");
			   }		  
		       break;
		    case 3:
				   system("cls");
				   Developer();
				   break;   
		    case 4:
				   system("cls");
				   exit(0);
				   break;   		   
	        default:
	    	   gotoxy(73,29);
		      	printf("\033[31m Invalid choice... \033[0m");
			   gotoxy(73,31);
			   printf("Try Again (y/n):");
		      			
	    }
	     
			   retry=getche();
   }
}  

////////////////// Employee Login function..........................
int LoginEmployee()
{
	char Emp_name[]="priya",Emp_pass[]="12345678";
	char Ad_name[]="Admin",Ad_pass[]="87654321";
	char uname[20],pwd[9];
	int x,r1,r2,r3,r4;
	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
	gotoxy(70,15);
printf("\033[36m************* Employee Login *************\033[0m");
	gotoxy(70,19);
	printf("Username: ");
	scanf("%s",&uname);
	gotoxy(70,21);
	printf("Password: ");
	for(x=0;x<strlen(Emp_pass);x++)
	{
		pwd[x]=getch();
		printf("*");
	}
	    pwd[x]='\0';
	r1=strcmp(uname,Emp_name);
	r2=strcmp(Emp_pass,pwd);
	r3=strcmp(uname,Ad_name);
	r4=strcmp(Ad_pass,pwd);
	if(r1==0 && r2==0 || r3==0 && r4==0)
	     return 1;
	else     
	     return 0;
}
////////////////////////////Financial Login function..................
int LoginFinancial()
{
	
	char Ad_name[]="Admin",Ad_pass[]="87654321";
	char uname[20],pwd[9];
	int x,ch,r1,r2;
	 printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t\t-------------------");
	gotoxy(70,15);
	printf("\033[36m************* Admin Login *************\033[0m");
	gotoxy(73,19);
	printf("Username: ");
	scanf("%s",&uname);
	gotoxy(73,21);
	printf("Password: ");
	for(x=0;x<strlen(Ad_pass);x++)
	{
		pwd[x]=getch();
		printf("*");
	}
	    pwd[x]='\0';
	r1=strcmp(uname,Ad_name);
	r2=strcmp(Ad_pass,pwd);
	if(r1==0 && r2==0 )
	     return 1;
	else     
	     return 0;
	
}


