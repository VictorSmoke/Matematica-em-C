//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <conio.h>
#include <ctype.h>
 
 	float media_escolar=6;
 	float media_recuperacao=2;
 
	float calcula(float N1, float N2, float N3, float N4){//fução para calculo de média
		
	return (N1+N2+N3+N4)/4;//calculo.
		
	}

	void verificacao(float media){
	
	if(media>=media_escolar){
		
		printf("APROVADO!\r\n");
		
		} else if (media<media_escolar && media>=media_recuperacao){
		
			printf("RECUPERAÇÃO!\r\n");
		
			} else if (media<media_recuperacao){
				
				printf("REPROVADO!\r\n");
				
			}	
			
	}

	int som(){
		
		
	Beep(880, 100);	
	
	}
	
	void main()//programa principal
	
{

	setlocale(LC_ALL, "Portuguese");//tradução.
	SetConsoleTitle("CALCULAR NOTA IFRN");//título do console.
	
//declaração de variaveis .

	float media=0, NO1, NO2, NO3, NO4;
	int i=0, N=0, N1=0, N2=0, N3=0;
	char C, C1, C2, C3;
	char dig[50], dig1[50], dig2[50], dig3[50];
	
	while(i<1){//loop para reutilização.
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 160 );//mudança de fonte.
	system("color 2f");//alterando plano de fundo.
	
	media=0;
	NO1=0;
	NO2=0;
	NO3=0;
	NO4=0;
	N=0;
	N1=0;
	N2=0;
	N3=0;
	
	
		system("cls");//limpa tela.
	
	//coleta de dados.
	
		som();
	
		printf("Informe nota 1.\r\n");
		
		do{
			
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
	
		else if (C==44)	
		
		{
			
			dig[N] = C;
			N++;
			printf("%c", C);
		}
	
	}		 
			while(C!=13);
		 	
		 	dig[N]='\0';
		 	NO1 = atof(dig);
	
		fflush(stdin);
		som();
		
		system("cls");//limpa tela.
	
		printf("Informe nota 2.\r\n");

		do 
	{
		som();
		C2=getch();
		if (isdigit(C2)!=0)
		
		{
			dig2[N2] = C2;
			N2++;
			printf ("%c", C2);
	
		}
	 
		else if (C2==8&&N2)	
		
		{
			
			dig2[N2]='\0';
			N2--;
			printf("\b \b");
		}
	
		else if (C2==44)	
		
		{
			
			dig2[N2] = C2;
			N2++;
			printf("%c", C2);
		}
	
	}		 
			while(C2!=13);
		 	
		 	dig2[N2]='\0';
		 	NO2 = atof(dig2);
	
		fflush(stdin);
		som();
		
		system("cls");
	
		printf("Informe nota 3.\r\n");

		do 
	{
		som();
		C3=getch();
		if (isdigit(C3)!=0)
		
		{
			dig3[N3] = C3;
			N3++;
			printf ("%c", C3);
	
		}
	 
		else if (C3==8&&N3)	
		
		{
			
			dig3[N3]='\0';
			N3--;
			printf("\b \b");
		}
	
		else if (C3==44)	
		
		{
			
			dig3[N3] = C3;
			N3++;
			printf("%c", C3);
		}
	
	}		 
			while(C3!=13);
		 	
		 	dig3[N3]='\0';
		 	NO3 = atof(dig3);
	
		fflush(stdin);
		som();
			
		system("cls");
	
		printf("Informe nota 4.\r\n");

		do 
	{
		som();
		C1=getch();
		if (isdigit(C1)!=0)
		
		{
			dig1[N1] = C1;
			N1++;
			printf ("%c", C1);
	
		}
	 
		else if (C1==8&&N1)	
		
		{
			
			dig1[N1]='\0';
			N1--;
			printf("\b \b");
		}
	
		else if (C1==44)	
		
		{
			
			dig1[N1] = C1;
			N1++;
			printf("%c", C1);
		}
	
	}		 
			while(C1!=13);
		 	
		 	dig1[N1]='\0';
		 	NO4 = atof(dig1);
	
		fflush(stdin);
		som();
			
		media=calcula(NO1, NO2, NO3, NO4);//injetando valores.
	
		system("cls");
	
		printf("Média:%.2f.\r\n",media);//exibição de resultados.
		printf("NOTAS: %.2f, %.2f, %.2f e %.2f.\r\n", NO1, NO2, NO3, NO4);
		verificacao(media);
		getch();//pausa.
	
	}

}












