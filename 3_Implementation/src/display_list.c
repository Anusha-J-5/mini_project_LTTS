void listrecords()
{
	FILE *f;
	int i;
	if((f=fopen("https://github.com/Anusha-J-5/mini_project_LTTS/blob/main/3_Implementation/temp.txt","rb"))==NULL)
		exit(0);
	system("cls");
	printf("Phone Number\t\tUser Name\t\t\tAmount\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,f)==1)
	{
		printf("\n%-10s\t\t%-20s\t\tRs. %.2f /-",s.phonenumber,s.name,s.amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");

fclose(f);
getch();
}
