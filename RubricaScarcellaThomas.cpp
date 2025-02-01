#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <io.h>
#include <conio.h>
#include "windows.h"
#include <ctime>
using namespace std;
void gotoxy(int x, int y)
{ COORD coordinate= {x,y};
  HANDLE console=GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleCursorPosition(console,coordinate);
}
char nome[20] = " ", cognome[20] = " ", numTel[20] = " ";
int main()
{    FILE*contatto;
     contatto = fopen("contatto.txt", "r");
     if(contatto==NULL)
     {  contatto = fopen("contatto.txt", "w");
	 }else
	     { contatto = fopen("contatto.txt", "a");
		 }
		 
gotoxy(1,3);printf("INSERISCI IL NOME, COGNOME E NUM.TEL:");
gotoxy(1,4);printf("INSERISCI IL NOME:");
gotoxy(1,5);scanf("%s", &nome);
gotoxy(1,6);printf("INSERISCI IL COGNOME:");
gotoxy(1,7);scanf("%s", &cognome);
gotoxy(1,8);printf("INSERISCI IL NUMERO TEL:");
gotoxy(1,9);scanf("%s", &numTel);
	
	fprintf(contatto, "%s %s %s\n", nome, cognome, numTel);
	fclose(contatto);
	
	 return 0;
	
}
