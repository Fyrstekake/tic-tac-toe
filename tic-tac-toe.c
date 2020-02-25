#include<stdio.h>
#include<stdlib.h>

char banner();
char rules();
char board();

int main(char argc, int *argv[]){
	system("clear");
	banner();
	rules();
	board();
	return 0;
}

char banner(){
	printf(" -----------------\n");
	printf(" == TIC-TAC-TOE ==\n");
	printf(" -----------------\n");
	printf(" by Eivind Thoresen\n");
	printf(" 2020\n");
}

char rules(){
	printf("\n\n -- HOW TO PLAY --\n\n");
	printf(" x goes first\n");
	printf(" player gives coordinate\n");
	printf(" example is : b3\n");
	printf(" first to reach 3 in a row wins\n\n\n");
}

char board(){
	printf("   a  b  c \n");
	printf(" 1| || || |\n");
	printf(" 2| || || |\n");
	printf(" 3| || || |\n");
	printf("\n\n");
}
