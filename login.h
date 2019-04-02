#ifndef _login_h_
#define _login_h_
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#endif 

int login()
{
		//initscr();
	char  user[]="ww";
	char  password[]="ww";
	scanf("%s",user);
	getchar();
	printf("password:");
	int g;
	for(g=0;g<20;g++)
	{
			
		password[g]=getchar();
		if(password[g]=='\n')
			{
				password[g]='\0';
				break;
			}
	}
	//endwin();
	char us[]="hack";
	char pass[]="123";
	printf("login\033[5m...\033[0m\n");
	sleep(2);
	system("clear");
	printf("========================================\n");
	if(strcmp(user,us)&&strcmp(password,pass)==0)
		printf("welcome\033[5m.\033[5m.\033\5m.\033[5m.\033[5m.\033[0m\n");
	else{
		printf("ERROR\n");
		sleep(2);
		exit(0);
	}
	return 0;
}