void deleterecords()
{
	FILE *f,*t;
	int i=1;
	char phonenumber[20];
	if((t=fopen("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt","w+"))==NULL)
	exit(0);
	if((f=fopen("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt","rb"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the phone number to be deleted from the Database");
	fflush(stdin);
	scanf("%[^\n]",phonenumber);
	while(fread(&s,sizeof(s),1,f)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{       i=0;
			continue;

		}
		else
			fwrite(&s,sizeof(s),1,t);
	}
	if(i==1)
	{       system("cls");
		printf("Phone number \"%s\" not found",phonenumber);
		remove("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt");
		rename("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/file.txt","https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt");
		getch();
		fclose(f);
		fclose(t);
		main();
	}
	remove("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt");
	rename("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/file.txt","https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt");
	system("cls");
	printf("The Number %s Successfully Deleted!!!!",phonenumber);
	fclose(f);
	fclose(t);
	getch();
}
