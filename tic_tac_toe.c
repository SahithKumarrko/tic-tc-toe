#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
char a[10]={'\0','\0','\0','\0','\0','\0','\0','\0','\0'},player,syst;
int count=0,stack[10],k=0,cho=0;

int getmove();
void display();
int move(int m);
char choice();

main()
{
	int check=0,mv=0,ch=0,m=0,lo=0,i=0,p=0,sys=0,e=0;
	char w[2],st[2];
    printf("\n\t\t\t\t TIC - TAC - TOE\n\n");
    printf("\n\t\tRULES\n\n\n");
    printf("The numbers of the game are as follows\n\n");
	printf("         1   |   2   |   3   \n");
	printf("       -----------------------\n");
	printf("         4   |   5   |   6   \n");
	printf("       -----------------------\n");
	printf("         7   |   8   |   9   \n");
	printf("\nYou have to select the appropriate numbers to play\n");
	printf("\n\t\t   Press 'q' to play\n ");
	q:
	scanf("%s",st);
	if(st[0]=='q')
	{
	start2:
srand((unsigned)time(NULL));
	ch=getmove();
	if(ch==0)
	{
		printf("\n\n                            System plays first\n\n");
	mv=rand()%9;
	srand((unsigned)time(NULL));
	sys=rand()%2;
	if(sys==1)
	{
		syst='X';
		player='O';
	}
	else
	{
		syst='O';
		player='X';
	}
	a[mv]=syst;
	display();
	goto start;
	}
	if(ch==1)
	{

		printf("\n\n                               Its yor turn\n\n");
		display();
		if(cho==0)
		{

			choice();
		}
		start:
	while(1)
	{
	if((a[0]==player&&a[1]==player&&a[2]==player)|| (a[0]==player&&a[3]==player&&a[6]==player) || (a[1]==player&&a[4]==player&&a[7]==player)||(a[2]==player&&a[5]==player&&a[8]==player)|| (a[5]==player&&a[4]==player&&a[3]==player) || (a[6]==player&&a[7]==player&&a[8]==player) || (a[0]==player&&a[4]==player&&a[8]==player) || (a[2]==player&&a[4]==player&&a[6]==player) )
{
	e=1;

	printf("\n\t\t\t      You have won\n\n");
break;
}
if((a[0]==syst&&a[1]==syst&&a[2]==syst) || (a[0]==syst&&a[3]==syst&&a[6]==syst) || (a[1]==syst&&a[4]==syst&&a[7]==syst)|| (a[2]==syst&&a[5]==syst&&a[8]==syst)|| (a[5]==syst&&a[4]==syst&&a[3]==syst) || (a[6]==syst&&a[7]==syst&&a[8]==syst) || (a[0]==syst&&a[4]==syst&&a[8]==syst) || (a[2]==syst&&a[4]==syst&&a[6]==syst ))
{
	e=1;

	printf("\n\t\t\t      System has won\n\n");
	break;
}
if(a[0]!='\0'&&a[1]!='\0'&&a[2]!='\0'&&a[3]!='\0'&&a[4]!='\0'&&a[5]!='\0'&&a[6]!='\0'&&a[7]!='\0'&&a[8]!='\0'){
	e=1;

	printf("\n\t\t\t           DRAW\n");
	break;

}
	if(a[0]=='\0'||a[1]=='\0'||a[2]=='\0'||a[3]=='\0'||a[4]=='\0'||a[5]=='\0'||a[6]=='\0'||a[7]=='\0'||a[8]=='\0')
{

	h:
printf("\n\nEnter your choice of number\n");
scanf("%d",&m);
count++;
if(a[m-1]=='\0')
{
	a[m-1]=player;
	display();
check++;
}
else if(a[m-1]!='\0'){
	printf("\nYour choice was wrong\n");
	printf("\nPlease enter your choice correctly\n");
	goto h;
}
else{
}

}
if((check!=5)&&(a[0]=='\0'||a[1]=='\0'||a[2]=='\0'||a[3]=='\0'||a[4]=='\0'||a[5]=='\0'||a[6]=='\0'||a[7]=='\0'||a[8]=='\0'))
{

move(m);
}


	if((a[0]==player&&a[1]==player&&a[2]==player)|| (a[0]==player&&a[3]==player&&a[6]==player) || (a[1]==player&&a[4]==player&&a[7]==player)||(a[2]==player&&a[5]==player&&a[8]==player)|| (a[5]==player&&a[4]==player&&a[3]==player) || (a[6]==player&&a[7]==player&&a[8]==player) || (a[0]==player&&a[4]==player&&a[8]==player) || (a[2]==player&&a[4]==player&&a[6]==player) )
{
	e=1;

	printf("\n\t\t\t      You have won\n\n");
break;
}
if((a[0]==syst&&a[1]==syst&&a[2]==syst) || (a[0]==syst&&a[3]==syst&&a[6]==syst) || (a[1]==syst&&a[4]==syst&&a[7]==syst)|| (a[2]==syst&&a[5]==syst&&a[8]==syst)|| (a[5]==syst&&a[4]==syst&&a[3]==syst) || (a[6]==syst&&a[7]==syst&&a[8]==syst) || (a[0]==syst&&a[4]==syst&&a[8]==syst) || (a[2]==syst&&a[4]==syst&&a[6]==syst ))
{
	e=1;

	printf("\n\t\t\t      System has won\n\n");
	break;
}



if(e==0)
{

if(a[0]!='\0'&&a[1]!='\0'&&a[2]!='\0'&&a[3]!='\0'&&a[4]!='\0'&&a[5]!='\0'&&a[6]!='\0'&&a[7]!='\0'&&a[8]!='\0'){
	printf("\n\t\t\t           DRAW\n");
	break;
}
}

}
}
}


else{
	st[0]='\0';
	printf("\t\t  Enter the correct option\n");
	goto q;
}
st[0]='\0';
w[0]='\0';
start1:
printf("\n\t\t  Do you want to play one more time\n");
printf("\t\t             Press Y or N\n");
scanf("%s",w);
if(w[0]=='Y'||w[0]=='y')
{
	a[0]='\0';
	a[1]='\0';
	a[2]='\0';
	a[3]='\0';
	a[4]='\0';
	a[5]='\0';
	a[6]='\0';
	a[7]='\0';
	a[8]='\0';
	a[9]='\0';
	count=0;
	cho=0;
	e=0;
	check=0;
	goto start2;
}
else if(w[0]=='N'||w[0]=='n')
{
	printf("\n\n\t\t \t THANK YOU\n\n");
	exit(1);
	system("PAUSE");
}
else{
	printf("Enter correct choice\n");
	goto start1;
}
system("PAUSE");
}

int getmove()
   {
	int ch=0;
	srand((unsigned)time(NULL));
		ch=rand()%2;
	if(ch==0)
	{
		return 0;


}
else
{
	return 1;

}


}


char choice()
{
	printf("\nEnter which character you want\n\n1)X\n2)O\n\ncharcter  :  ");
    scanf(" %c",&player);

	if(player=='x'||player=='1'||player=='X')
	{
		player='X';
		syst='O';
		cho++;
	}
	if(player=='o'||player=='2'||player=='O')
	{
		player='O';
		syst='X';
		cho++;
	}

}

void display()
{
	printf("         %c   |   %c   |   %c   \n",a[0],a[1],a[2]);
	printf("       -----------------------\n");
	printf("         %c   |   %c   |   %c   \n",a[3],a[4],a[5]);
	printf("       -----------------------\n");
	printf("         %c   |   %c   |   %c   \n",a[6],a[7],a[8]);
}
int move(int m)
{


	printf("\n\nITs System turn \n\n");

int g=0,f,i,u,t,j,o,l,n;

if(count==1)
{
	srand((unsigned)time(NULL));
	y:
	o=rand()%9;
	if(a[o]=='\0')
	{
		a[o]=syst;
	}
else
	{
		goto y;
	}
}
else{

for(i=0;i<9;i++)
{
	for(j=0;j<9;j++)
	{
		if(i!=j)
		{


		if(a[i]==syst&&a[j]==syst)
		{
	//////////////////////////////////////////////////
		if(i==0)
		{
		   if(j==1&&a[2]=='\0')
		   {
		   	a[2]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==2&&a[1]=='\0')
		   {
		   	a[1]=syst;
		   		k=1;	   	g=1;
		   	break;
			   }
			   if(j==4&&a[8]=='\0')
		   {
		   	a[8]=syst;g=1;
		   	k=1;

			   break;
			   }
			   if(j==3&&a[6]=='\0')
		   {
		   	a[6]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==6&&a[3]=='\0')
		   {
		   	a[3]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==8&&a[4]=='\0')
		   {
		   	a[4]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
		}


		if(i==1)
		{
			if(j==0&&a[2]=='\0')
		   {
		   	a[2]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==2&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=1;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[7]=='\0')
		   {
		   	a[7]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==7&&a[4]=='\0')
		   {
		   	a[4]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }

		}

		if(i==2)
		{
			if(j==0&&a[1]=='\0')
		   {
		   	a[1]=syst;
			  k=1;
			   g=1;
		   	break;
			   }
			   if(j==1&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==4&&a[6]=='\0')
		   {

			   a[6]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==5&&a[8]=='\0')
		   {
		   	a[8]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==8&&a[5]=='\0')
		   {
		   	a[5]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==6&&a[4]=='\0')
		   {
		   	a[4]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
		}

		if(i==3)
		{
			if(j==0&&a[6]=='\0')
		   {
		   	a[6]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==6&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==4&&a[5]=='\0')
		   {
		   	a[5]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==5&&a[4]=='\0')
		   {

			   a[4]=syst;

			   k=1;g=1;
		   	break;
			   }
		}

		if(i==4)
		{
			if(j==0&&a[8]=='\0')
		   {
		   	a[8]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==8&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==2&&a[6]=='\0')
		   {
		   	a[6]=syst;
		   	k=1;
			   g=1;
		   	break;
			   }
			   if(j==3&&a[5]=='\0')
		   {
		   	k=1;
			   a[5]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[2]=='\0')
		   {
		   	k=1;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==5&&a[3]=='\0')
		   {
		   	k=1;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==1&&a[7]=='\0')
		   {
		   	k=1;
		   	a[7]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[1]=='\0')
		   {
		   	k=1;
		   	a[1]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==5)
		{
			if(j==2&&a[8]=='\0')
		   {
		   	k=1;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[2]=='\0')
		   {
		   	k=1;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==3&&a[4]=='\0')
		   {
		   	k=1;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[3]=='\0')
		   {
		   	k=1;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==6)
		{
			if(j==4&&a[2]=='\0')
		   {
		   	k=1;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==2&&a[4]=='\0')
		   {
		   	k=1;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==3&&a[0]=='\0')
		   {
		   	k=1;
		   	a[0]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==0&&a[3]=='\0')
		   {
		   	k=1;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[8]=='\0')
		   {
		   	k=1;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[7]=='\0')
		   {
		   	k=1;
		   	a[7]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==7)
		{
			if(j==4&&a[1]=='\0')
		   {
		   	k=1;
		   	a[1]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==1&&a[4]=='\0')
		   {
		   	k=1;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[8]=='\0')
		   {
		   	k=1;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[6]=='\0')
		   {
		   	k=1;
		   	a[6]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==8)
		{
			if(j==2&&a[5]=='\0')
		   {
		   	k=1;
		   	a[5]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==5&&a[2]=='\0')
		   {
		   	k=1;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[0]=='\0')
		   {
		   	k=1;
		   	a[0]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==0&&a[4]=='\0')
		   {
		   	k=1;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[7]=='\0')
		   {
		   	a[7]=syst;
		   	k=1;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[6]=='\0')
		   {
	a[6]=syst;
		   	g=1;
		   	k=1;
		   	break;
			   }
		}
	}
}
}
if(g==1)
{
	break;
}
}
if(k!=1)
{

for(i=0;i<9;i++)
{
	for(j=0;j<9;j++)
	{
		if(i!=j)
		{
		if(a[i]==player&&a[j]==player)
		{
	//////////////////////////////////////////////////
		if(i==0)
		{
		   if(j==1&&a[2]=='\0')
		   {
		   	a[2]=syst;

			   g=1;
		   	break;
			   }
			   if(j==2&&a[1]=='\0')
		   {
		   	a[1]=syst;
		   			   	g=1;
		   	break;
			   }
			   if(j==4&&a[8]=='\0')
		   {
		   	a[8]=syst;g=1;

			   break;
			   }
			   if(j==3&&a[6]=='\0')
		   {
		   	a[6]=syst;

			   g=1;
		   	break;
			   }
			   if(j==6&&a[3]=='\0')
		   {
		   	a[3]=syst;

			   g=1;
		   	break;
			   }
			   if(j==8&&a[4]=='\0')
		   {
		   	a[4]=syst;

			   g=1;
		   	break;
			   }
		}


		if(i==1)
		{
			if(j==0&&a[2]=='\0')
		   {
		   	a[2]=syst;

			   g=1;
		   	break;
			   }
			   if(j==2&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[7]=='\0')
		   {
		   	a[7]=syst;

			   g=1;
		   	break;
			   }
			   if(j==7&&a[4]=='\0')
		   {
		   	a[4]=syst;

			   g=1;
		   	break;
			   }

		}

		if(i==2)
		{
			if(j==0&&a[1]=='\0')
		   {
		   	a[1]=syst;

			   g=1;
		   	break;
			   }
			   if(j==1&&a[0]=='\0')
		   {
		   	a[0]=syst;

			   g=1;
		   	break;
			   }
			   if(j==4&&a[6]=='\0')
		   {

			   a[6]=syst;

			   g=1;
		   	break;
			   }
			   if(j==5&&a[8]=='\0')
		   {
		   	a[8]=syst;

			   g=1;
		   	break;
			   }
			   if(j==8&&a[5]=='\0')
		   {
		   	a[5]=syst;

			   g=1;
		   	break;
			   }
			   if(j==6&&a[4]=='\0')
		   {
		   	a[4]=syst;
		   	k=4;
			   g=1;
		   	break;
			   }
		}

		if(i==3)
		{
			if(j==0&&a[6]=='\0')
		   {
		   	a[6]=syst;
		   	k=6;
			   g=1;
		   	break;
			   }
			   if(j==6&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=0;
			   g=1;
		   	break;
			   }
			   if(j==4&&a[5]=='\0')
		   {
		   	a[5]=syst;
		   	k=5;
			   g=1;
		   	break;
			   }
			   if(j==5&&a[4]=='\0')
		   {

			   a[4]=syst;

			   k=4;g=1;
		   	break;
			   }
		}

		if(i==4)
		{
			if(j==0&&a[8]=='\0')
		   {
		   	a[8]=syst;
		   	k=8;
			   g=1;
		   	break;
			   }
			   if(j==8&&a[0]=='\0')
		   {
		   	a[0]=syst;
		   	k=0;
			   g=1;
		   	break;
			   }
			   if(j==2&&a[6]=='\0')
		   {
		   	a[6]=syst;
		   	k=6;
			   g=1;
		   	break;
			   }
			   if(j==3&&a[5]=='\0')
		   {
		   	k=5;
			   a[5]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[2]=='\0')
		   {
		   	k=2;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==5&&a[3]=='\0')
		   {
		   	k=3;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==1&&a[7]=='\0')
		   {
		   	k=7;
		   	a[7]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[1]=='\0')
		   {
		   	k=1;
		   	a[1]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==5)
		{
			if(j==2&&a[8]=='\0')
		   {
		   	k=8;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[2]=='\0')
		   {
		   	k=2;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==3&&a[4]=='\0')
		   {
		   	k=4;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[3]=='\0')
		   {
		   	k=3;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==6)
		{
			if(j==4&&a[2]=='\0')
		   {
		   	k=2;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==2&&a[4]=='\0')
		   {
		   	k=4;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==3&&a[0]=='\0')
		   {
		   	k=0;
		   	a[0]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==0&&a[3]=='\0')
		   {
		   	k=3;
		   	a[3]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[8]=='\0')
		   {
		   	k=8;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[7]=='\0')
		   {
		   	k=7;
		   	a[7]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==7)
		{
			if(j==4&&a[1]=='\0')
		   {
		   	k=1;
		   	a[1]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==1&&a[4]=='\0')
		   {
		   	k=4;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[8]=='\0')
		   {
		   	k=8;
		   	a[8]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==8&&a[6]=='\0')
		   {
		   	k=6;
		   	a[6]=syst;
		   	g=1;
		   	break;
			   }
		}

		if(i==8)
		{
			if(j==2&&a[5]=='\0')
		   {
		   	k=5;
		   	a[5]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==5&&a[2]=='\0')
		   {
		   	k=2;
		   	a[2]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==4&&a[0]=='\0')
		   {
		   	k=0;
		   	a[0]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==0&&a[4]=='\0')
		   {
		   	k=4;
		   	a[4]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==6&&a[7]=='\0')
		   {
		   	a[7]=syst;
		   	g=1;
		   	break;
			   }
			   if(j==7&&a[6]=='\0')
		   {
	a[6]=syst;
		   	g=1;
		   	break;
			   }
		}
	}
}
}
if(g==1)
{
	break;
}
}
}
n=0;l=0;
if(g!=1)
{
	while(1)
	{
		srand((unsigned)time(NULL));
		t=rand()%9;

		if(a[t]=='\0')
		{
			a[t]=syst;
			break;
		}


	}
}
}
display();
g=0;
k=0;
}



