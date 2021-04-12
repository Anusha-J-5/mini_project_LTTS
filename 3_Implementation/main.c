#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include "fun.h"
struct contact
{
char phonenumber[20];
char name[50];
float amount;
}s;

char get;
int main()
{	int password;
	int phonenumber;
	char choice;



	system("cls");

	printf("\n\n\n\t\t---------------------------------------------------------------");
	printf("\n\n\t\t---WELCOME TO THE TELECOM BILLING MANAGEMENT SYSTEM---");
	printf("\n\n\t\t-----------------------------------------------------------------");
	Sleep(2000);
	getch();
    system("cls");
	while (1)
	{
		system("cls");
		printf("\n enter\n A : for adding new records.\n L : for list of records");
		printf("\n M : for modifying records.\n P : for payment");
		printf("\n S : for searching records.");
		printf("\n D : for deleting records.\n E : for exit\n");
		choice=getche();
		choice=toupper(choice);
		switch(choice)
		{
			case 'P':
				payment();break;
			case 'A':
				addrecords();break;
			case 'L':
				listrecords();break;
			case 'M':
				modifyrecords();break;
			case 'S':
				searchrecords();break;
			case 'D':
				deleterecords();break;
			case 'E':
				system("cls");
				printf("\n\n\t\t\t\tTHANK YOU");
				printf("\n\n\n\n\n:\n\tFOR USING OUR SERVICE");
				Sleep(2000);
				exit(0);
				break;
			default:
				system("cls");
				printf("Incorrect Input");
				printf("\nAny key to continue");
				getch();
		}
	}
}
