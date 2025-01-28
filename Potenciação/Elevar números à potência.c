//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
#include <math.h>

	int som(){
		
		
	Beep(880, 100);	
	
}
	
	void Elevar(int N1, int EX, int *R){
	
	
		
	*R=pow(N1,EX);
	
	}
	
	
	void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradução.

	
//declaração de variaveis .
	
	char C, C1;
	char dig[50], dig1[50];
	int i=0, N=0, NN=0, N1=0, EX=0, R=0;
	
	while(i<1){
	
	system("cls");//limpando tela.
	
//coleta de dados.
		
		N=0;
		NN=0;
		
		fflush(stdin);
		printf("Digite o número que deseja elevar.\r\n");
	
			do 
	{
		som();
		C=getch();
		if (isdigit(C)!=0)
		
		{
			dig[N] = C;
			N++;
			printf ("%c", C);
	
		}
	 
		else if (C==8&&N)	
		
		{
			
			dig[N]='\0';
			N--;
			printf("\b \b");
		}
	
	
	}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	N1 = atoi(dig);
	
		fflush(stdin);
		printf("\r\n");
		printf("Digite o valor do expoente.\r\n");
	
			do 
	{
		som();
		C1=getch();
		if (isdigit(C1)!=0)
		
		{
			dig1[NN] = C1;
			NN++;
			printf ("%c", C1);
	
		}
	 
		else if (C1==8&&NN)	
		
		{
			
			dig1[NN]='\0';
			NN--;
			printf("\b \b");
		}
	
	
	}		 
			while(C1!=13);
		 	
		 	dig1[NN]='\0';
		 	EX = atoi(dig1);
	
	Elevar(N1, EX, &R);
	
	system("cls");
	
	printf("Resultado:%d. Número:%d. Expoente:%d.\r\n", R, N1, EX);
	getch();
	
	}
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
