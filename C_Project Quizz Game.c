#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<time.h>
void score(int );
//void edit_score(int);
void view();
void delay()
{
	float i;
	for(i=0;i<10000000;i++);
}
void title()
{
	printf("\n\t********************************************************************");
	printf("\n\t******************   ###########################   *****************");
	printf("\n\t******************    #                       #   ******************");
	printf("\n\t******************    #   CHALLENGING         #   ******************");
	printf("\n\t******************    #                       #   ******************");
	printf("\n\t******************    #           QUIZZ_GAME  #   ******************");
	printf("\n\t******************    #                       #   ******************");
	printf("\n\t*******************   ###########################  *****************");
	printf("\n\t********************************************************************\n");
	printf("\n\n\t\t\t\t PLEASE ENTER YOUR CHOICE\n");
}
void menu()
{
	printf("1.Start the Game\n\n");
	delay();
	printf("2.View High Score\n\n");
	delay();		
	printf("3.Help\n\n");
	delay();
	printf("4.Quit the game\n\n");
}
main()
{
	title();
	int ch,Topic,answer,marks=0;
	char k,ch1;
	clock_t start, end;
	double tmused;
	
	//system("cls");
	menu();
	scanf("%d",&ch);
	system("cls");
	if(ch==4)
	{
	
	printf("\n\n\n\t\t\t\t*************** THANK YOU*******************\n\n\n\n");
	 exit(1);
    }
	if(ch==3)
	{
		system("cls");
		printf("\n1.This Quizz contains 4 Topics \n");
		printf("2.Each topic has 10 questions \n");
		printf("3.each question has 4 options \n");
		printf("4.If answer is correct 10 marks wil be awared \n");
		printf("5.If answer is wrong 5 marks will be deduced \n");
		printf("6. If you want to skip the question press 5 option \n");
		printf("\n\n\n Press Enter to Go back");
		fflush(stdin);
		scanf("%c",&k);
		
		if(k == '\n')
		{
			system("cls");
				main();
				
		}
	}

	if(ch==1)
	{
	
		printf("\n\n1.sports\n\n2.History\n\n3.General Knowledge \n\n4.Curent Affairs\n\n:");
			printf("\n\nPlease Select Your Interested Topic:   ");
		scanf("%d",&Topic);
			//getch();
			system("cls");
		printf("Your time starts now\n");
		printf("3\t");
		delay();delay();delay();delay();delay();delay();
		printf("2\t");
		delay();delay();delay();delay();delay();delay();
		printf("1\t");
		delay();delay();delay();delay();delay();delay();
		printf("Go\n\n");
		delay();delay();delay();delay();delay();delay();
		
		
		system("cls");
		
		start = clock();
		
		if(Topic==1)
		{
		printf("1.what is our National Game ? \n");
			printf("1.Cricket      2.Tennis     3.Hockey       4.Kabaddi \n");
			printf("\n\n Answer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==3)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
			printf("\n1.who is the captain of INDIAN CRICKET TEAM ? \n");
			printf("1.DHONI      2.KOHLI     3.ROHITH SHARMA        4.RAHANE \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
			printf("\n1.who made 100 centuries in cricket? \n");
			printf("1.lara      2.Ricky Pointing     3.kohli       4.sachin \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==4)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
			printf("\n1.which team won FIFA world cup in 2014? \n");
			printf("1.GERMANY      2.USA     3.ENGLAND       4.BRAZIL \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==1)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.who got GOLDEN BOOT ? \n");
			printf("1.LIONE LMESSI      2.CRISTIANO RONALDO     3.JAMES RODRIGUEZ       4.THOMAS MULER \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==3)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.who won OLYMPICS bronz medal in india  ? \n");
			printf("1.sindhu      2.srikanth     3.Sakshi Malik       4.Sushil Kumar \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==4)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				
			system("cls");
			 printf("1.what is National Game of ENGLAND? \n");
			printf("1.Cricket      2.Tennis     3.Hockey       4.Kabaddi \n");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==1)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.who is the captain of AUSTRALIA CRICKET TEAM ? \n");
			printf("1.DHONI      2.STV.SMITH     3.MORGAN        4.RAHANE \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.who made fastest century in T20 cricket? \n");
			printf("1.YUVRAJ SINGH     2.Ricky Pointing     3.kohli       4.GAYLE \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==4)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.How many teams are qualified for FIFA world cup in 2018? \n");
			printf("1.45      2.153     3.211       4.32 \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==3)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.where is the FIFA WORLD CUP IN 2018? \n");
			printf("1.ENGLAND      2.USA     3.RUSSIA      4.BRAZIL \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==3)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			printf("\n1.How many RINGS in OLYMPIC SYMBOL ? \n");
			printf("1.7      2.4     3.6       4.5 \n");
			printf("\n\nAnswer : ");
			scanf("%d",&answer);
			if(answer==4)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				printf("\n\n Your total score %d",marks);
						
		    }
	
	    if(Topic==2)
	     {
		    printf("1.when the world war II starts  ? \n");
			printf("1.1914      2.1939     3.1929       4.1927 \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}
			
			system("cls");
			printf("1.when the salt march was started  ? \n");
			printf("1.1929      2.1930     3.1931       4.1932 \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			//printf("marks won is %d \n",marks);		
			printf("1.who is ouer first prime minister  ? \n");
			printf("1.Jawaharlal nehru      2.Radakrishna     3.Indira gandhi       4.prathibapatil \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==1)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}
			
			system("cls");
			//printf("marks won is %d \n",marks);	
			printf("1.who built Taj Mahal  ? \n");
			printf("1.Akbar      2.Baber     3.Shajahan       4.jahangear \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==3)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}	
			system("cls");
			//printf("marks won is %d \n",marks);
			printf("1.who is the IRION man of INDIA ? \n");
			printf("1.GANDHIJI      2.VALLABHAI PATEL    3.NEHRU      4.BOSE \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}
			
			
		    system("cls");
			printf("1.when the world war I starts  ? \n");
			printf("1.1914      2.1917     3.1929       4.1927 \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}
			system("cls");
			//printf("marks won is %d \n",marks);
			printf("1.when the first 5 year plan started  ? \n");
			printf("1.1950      2.1951     3.1952       4.1953 \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
               else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			//printf("marks won is %d \n",marks);		
			printf("1.who is oue first  vice president of INDIA  ? \n");
			printf("1.Jawaharlal nehru      2.SARVEPALLI RADHAKRISHNA     3.Indira gandhi       4.prathibapatil \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
			{
               marks=marks+10;
			}
			else if (answer == 5)
               marks= marks;
			else
			{
				marks=marks-5;
			}
			system("cls");
			//printf("marks won is %d \n",marks);	
			printf("1.who design the INDIAGATE ? \n");
			printf("1.WILLIAM EMERSON      2.GEORGE WITTET     3.SIR EDWIN LUTYENS       4.JOHN ROY \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==3)
			{
               marks=marks+10;
			}
			
			else
			{
				marks=marks-5;
			}	
			system("cls");
			printf("1.what is the NICK NAME of SUBHASH CHANDRA BOSE? \n");
			printf("1.SRISRI      2.CHACHAJI    3.NETAJI     4.BAPU \n");
			printf("\n\nAnswer \n");
			scanf("%d",&answer);
			if(answer==2)
			{
               marks=marks+10;
			}
			else
			{
				marks=marks-5;
	        }
        }
    
    	if(Topic==3 || Topic == 4)
		{
		printf("\n\n1.With which country World Bank inks $98 million loan pact for renewable energy?\n");
			printf("1.	US\t 2.	India\t3.	China\t4.	Switzerland");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
			printf("\n\n2.2. 	Which country's goverment has ranked as third most trusted government in the world as per Government at a Glance 2017 published by Organisation for Economic Co-operation and Development (OECD)?\n");
			printf("1.	India\t 2.	Pakistan\t3.	Brasil \t4.	China");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==1)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				
			system("cls");
			printf("\n\n3. As per the report of International Monetary Fund (IMF) India ranks _________ in terms of Gross Domestic Product (GDP) per capita\n");
			printf("1.	111\t 2.	96\t3.	120 \t4.126	");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==4)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				
			system("cls");
					printf("\n\n4. Who has won the 2017 Slovenian presidential election?\n");
			printf("1.	Andrej Sisko\t2.	Borut Pahor\t3.	Marjan Sarec\t4.	Boris Popovic");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
			
			printf("\n\n5. Who is the ambassador to India?\n");
			printf("1.	Hillary Clinton	\t2.Kenneth Juster	\t3.Richard Verma	\t4.Barack Obama");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");
				
			printf("\n\n6. Who is the president of America\n");
			printf("1.	Obama	\t2.Donarld trump	\t3.George bush	\t4.Klienton");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			system("cls");	
			printf("\n\n7. Who is the Prime Minister of India\n");
			printf("1.	Man mohan Singh	\t2.Rahul Gandhi	\t3.Narendra Modi	\t4.Pranab Mukharjee");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==3)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
				
				printf("\n\n8. Who is the CEO of Twitter\n");
			printf("1.	Jack Dorsey	\t2.MArk Zuker Berg	\t3.Noah Glass	\t4.Biz Stone");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==1)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
				
			printf("\n\n9. Highest peak in the world\n");
			printf("1.	Mt Everest	\t2.Kilimajaro	\t3.Kailash	\t4.Mt Aconcagua");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==1)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
				system("cls");
				
			printf("\n\n10.Largest Planet in the soalr syatem\n");
			printf("1.	Earth	\t2.Jupiter	\t3.Mars	\t4.Neptune");
			printf("\n\nAnswer : ");
			fflush(stdin);
			scanf("%d",&answer);
			if(answer==2)
               marks=marks+10;
            else if (answer == 5)
               marks= marks;
			else
				marks=marks-5;
			
			
			
			
		
				system("cls");
				printf(" \n\nYour total score %d",marks);		
		}
    end = clock();
    tmused= (double)(end-start)/CLOCKS_PER_SEC;
    system("cls");
    printf("\n\t\t\t You completed in %f seconds",tmused);
    printf("\n\nYou got %d marks",marks);
    if(tmused <= 30)
    {
    	printf("\n You got 50 bonus points");
    	marks = marks+50;
	}
	else if(tmused >= 30 && tmused <= 49)
    {
    	printf("\n You got 30 bonus points");
    	marks = marks+30;
	}
	else if(tmused >= 50 && tmused <= 69)
    {
    	printf("\n You got 20 bonus points");
    	marks = marks+20;
	}
	else if(tmused >= 70 && tmused <= 99)
    {
    	printf("\n You got 10 bonus points");
    	marks = marks+10;
	}
	else
	{
		printf("\n Sorry you got no bonus points");
	}
	
	printf("\nCongratulations !!!\n\n\t  ************** Your Final Score is %d points ************",marks);
	printf("\n\n\n\n \t\t\t\t THANK YOU FOR PLAYING ");
    
    
    
    printf("\n\n\nDo you want to write the scores in the file (Y/N) :");
		fflush(stdin);
		scanf("%s",&ch1);
		if(ch1=='Y'||ch1=='y')
		{score(marks);}
}
    if(ch==2)
    {
    	view();
	}
	if(ch==4)
	exit(0);

}
void score(int marks)
{
	FILE *fptr;char name[25];int mark=marks,sc;
	printf("\nEnter your name : ");
	fflush(stdin);
	gets(name);
	fptr=fopen("score.txt","a");
	if(fptr==NULL)
	{
		printf("File does not exist");
		exit(0);
	}
	fprintf(fptr,"Name = %s",name);
	fprintf(fptr,"\nScore= %d",mark);
	fclose(fptr);
	fptr=fopen("score.txt","r");
	fscanf(fptr,"\n%d",&sc);
	if(mark>=sc);
	{
		sc=mark;
		fclose(fptr);
		fptr=fopen("score.txt","a");
		fprintf(fptr,"Name = %s",name);
		fprintf(fptr,"\nScore=%d",sc);
		fclose(fptr);}	}
void view()
{
	char name[20];int s;FILE *fptr;
	fptr=fopen("score.txt","r");
	if(fptr==NULL)
	{
		printf("File does not exist");
		exit(0);
	}
	fscanf(fptr,"%s",&name);
	fscanf(fptr,"\n%d",&s);
	printf("Name = %s",name);
	printf("\nScore= %d",s);
	fclose(fptr);
}
