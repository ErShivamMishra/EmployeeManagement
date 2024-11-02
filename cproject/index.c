#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<process.h>
#include "login.h"

//struct Employee
//{
//int id,age;
//float salary;
//char name[25],gender[20],branch[20];	
//};



void gotoxy(int x, int y)
{
	COORD coord;
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void main()
{
//	struct Employee emp[100];
		int r,q;
	gotoxy(70,15);
	printf("Loading....");
	gotoxy(70,16);
	for(r=1;r<=20;r++)
	{
		for(q=0;q<=10000000;q++);
		printf("#");
	}
	system("cls");

    system("cls");
    system("color 9F");
    printf("\n\t###################\t\t###########################################################################\t###################\t\t");
    printf("\n\t#####  GURU   #####\t\t############                                                   ############\t#####         #####\t\t");
    printf("\n\t#####  GROUP  #####\t\t############   Employee Record Management System Project in C  ############\t#####   KSS   #####\t\t");
    printf("\n\t#####         #####\t\t############                                                   ############\t#####         #####\t\t");
    printf("\n\t###################\t\t###########################################################################\t###################\t\t");
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t-------------------");
//    printMessageCenter(message);
    printf("\n\t-------------------\t\t---------------------------------------------------------------------------\t-------------------");
    
    
      printf("\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t   **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t\t\t         =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t\t\t         =                  WELCOME                  =");
    printf("\n\t\t\t\t\t\t         =                    TO                     =");
    printf("\n\t\t\t\t\t\t         =               Employee Record             =");
    printf("\n\t\t\t\t\t\t         =                 MANAGEMENT                =");
    printf("\n\t\t\t\t\t\t         =                   SYSTEM                  =");
    printf("\n\t\t\t\t\t\t         =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n\t\t\t\t\t\t   **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    
    
      printf("\n\n\n");
       printf("\n\t  **-**-**-**-**-**\t\t\t\t\t\t\t\t\t\t\t       **-**-**-**-**-**");
       printf("\n\t  Submitted To:- \t\t\t\t\t\t\t\t\t\t\t       Submitted By:-");
       printf("\n\t  Er.Satyam Mishra (Project Head)\t\t\t\t\t\t\t\t\t       Shivam Kumar Mishra(Project Manager)");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Priyanka Gupta(Team Leader)");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Amit Kumar Jaiswal");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Kajal Gupta");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Malti Paysi");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Prachi Sharma");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Vikash Yadav");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Vishal Yadav");
       printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t       Vikash Pal");
      printf("\n\t\t\t Enter any key to LOGIN.....");
      getch();
      login();
    
}
