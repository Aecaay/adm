#include<stdio.h>
#include<stdlib.h>
#include<curses.h>
#include "login.h"



int delect(char file[128]);															//删除
int setect(char file[128]);								  //查询
int intall(char file[128]);														//新建
int coose( );																		//主
int doy(int c);																//判断选项

int main(int argc , char  const *argv[])
{
<<<<<<< HEAD
		char a,b;
		
		login();
=======
		system("clear");
>>>>>>> 02a5a251aee669bb7da5c06413853a828bc489e3
		int ant;
		ant=coose();
		return  0;
}

int coose()
{
		int c;
		char file[128];
		printf("\033[;32mwhere is feil:(now you in /)\033[0m\n");
		scanf("%s",file);
		system("clear");
		printf("\033[5m\033[30mNow have three\033[0m\033[0m\n");
		printf("\033[;31m0:delect;\033[0m\n\033[;35m1:setect;\033[0m\n\033[;32m2:intall;\033[0m\n");
		scanf("%d",&c);
	if(c == 0)//delete
	{
			printf("\033[;31mNow is delect\033[0m\n");
			printf("do you wang to delete %s\n", &file);
			scanf("%s",&c);
			if(c=='y')
				delect(file);
		}
		else if(c ==1) //setect
		{
			printf("\033[;35mNow is setect\033[0m\n");
			printf("\n");
			setect(file);
		}
		else if(c ==2)//intall
		{
			printf("\033[;32mNow is intall\033[0m\n");
			intall(file);
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
		printf("\033[34m\033[5m\nno thing....\033[0m\033[0m\n");
	return 0;
}


int intall(char file[128])
{
	FILE *open;
	char i[12];
printf("\033[33mif file live then delete\033[0m\n");
printf("\033[33myou need scanf \033[0m\n");
open=fopen(file,"w+");
scanf("%s",i);
fprintf(open,"%s",i);
fclose(open);
printf("\033[33mNow is save\033[0m\n");
	return  0;
}


int delect(char file[128])
{
	if(remove(file)==0)
		printf("\033[31mNow you delete\033[0m\n");
	else 
		printf("\033[31mworring!!\033[0m\n");
	return 0;
}
