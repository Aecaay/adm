#include<stdio.h>
#include<stdlib.h>


int delect(int d);
int setect(char file[128]);
int intall(int i);
int coose( );
int doy(int c);

int main(int argc , char  const *argv[])
{
		system("clear");
		int ant;
		ant=coose();
		return  0;
}

int coose()
{
		int c;
		char file[128];
		printf("\033[;32mwhere is feil:\033[0m\n");
		scanf("%s",file);
		system("clear");
		printf("\033[5m\033[30mNow have three\033[0m\033[0m\n");
		printf("\033[;31m0:delect;\033[0m\n\033[;35m1:setect;\033[0m\n\033[;32m2:intall;\033[0m\n");
		scanf("%d",&c);
	if(c == 0){
			printf("\033[;31mNow is delect\033[0m\n");
		}
		else if(c ==1) //setect
		{
			printf("\033[;35mNow is setect\033[0m\n");
			printf("\n");
			setect(file);
		}
		else if(c ==2)
		{
			printf("\033[;32mNow is intall\033[0m\n");
		}
		else 
		{
			printf("\033[;31mworring!\033[0m\n");
			doy(c);
		}
		return  c;
}
int doy(int c)
{
			if(c!=0&&c!=1&&c!=2)
		{
			printf("\033[;31magine?\033[0m\n");
			printf("\033[;31my or n\033[0m\n");
			scanf("%s",&c);
			if(c=='y')
				c=coose();
		}
		return 0;
}
int setect(char file[128])
{
	FILE *open;
	
	char i;

	open=fopen(file,"r");
	while((i=fgetc(open))!=EOF)
	{
		putchar(i);
	}
		fclose(open);
	return 0;
}
