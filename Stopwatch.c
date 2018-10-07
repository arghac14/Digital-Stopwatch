#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
char ch;
void timer(){
	int s=0,m=0,h=0,ms=0;
	char c;
	printf("%c",7);
	while(1){

		
	
		printf("\n___________________________________STOPWATCH____________________________________\n");
		printf("Pause--->'p'  Reset--->'r'  Exit--->'e'\n");
		printf("\t\t\t\n\n\n\n\n\n\n\t\t\t\t______________\n\n");
		printf("\t\t\t\t%d : %d : %d : %d\n",h,m,s,ms);
		printf("\t\t\t\t______________\n");
		Sleep(1);
		ms++;
		system("cls");
		if(ms==100){
			s++;
			ms=0;
			if(s==60){
		  		m++;
				s=0;
				if(m==60){
					h++;
					m=0;
			}
		}
	}
	if(kbhit()){
	c=getch();
	 if(c=='p' || c=='P'){
		
		printf("\n___________________________________STOPWATCH____________________________________\n\n");
		printf("\t\t\t\n\n\n\n\n\n\n\t\t\t\t______________\n\n");
		printf("\t\t\t\t%d : %d : %d : %d\n",h,m,s,ms);
		printf("\t\t\t\t______________\n");
		printf("%c",7);
		Sleep(400);
		printf("\n\n\t\t\t    Press any key to start again.\n");
		if(getch()=='s'||getch()=='S'){
			printf("%c",7);
			continue;
		}
		else{
			printf("%c",7);
			continue;
		}
		break;
	}
	else if (c=='r' || c=='R'){
		h=0;
		m=0;
		s=0;
		ms=0;
		printf("\t\t\t\tStopwatch restarting..");
		printf("%c",7);
		Sleep(500);
		continue;
	}
	else if(c=='e' || c=='E'){
		printf("%c",7);
		printf("Author: arghac14");
		exit(0);
	}
 
	
}
}
}
int main(){
	system("color 0A");
	printf("\n\n\n\n");
	printf("\t\t_______________DIGITAL STOPWATCH_______________\n");
	printf("\t\t| This is a digital stopwacth.                 |\n");
	printf("\t\t| Press 's' to 'start' the timer.              |\n");
	printf("\t\t| Press 'p' to 'pause' the timer.              |\n");
	printf("\t\t| Press 'r' to 'reset' the timer.              |\n");
	//printf("\t\t| Press 's' again to 'stop' the timer          |\n");
	printf("\t\t|______________________________________________|\n");
	Sleep(1000);
	printf("\n\n\t\tPress ");
	Sleep(100);
	printf("'s' ");
	Sleep(100);
	printf("to ");
	Sleep(90);
	printf("start ");
	Sleep(80);
	printf("the ");
	Sleep(80);
	printf("stopwatch!\n\n\n\n\n ");
	while(1){
	
	ch=getch();
	if(ch=='s'){
	system("cls");
	timer();
	break;
     }
     else{
     	printf("\t\n\t\tPress 's' to 'start' the timer!\n ");
    	continue;
	 }
	}
	}
	
