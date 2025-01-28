//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradução para português.

	char L, D, dig[50];
	int N, i, T, W=0;	
	
	
	while(1>W){
	
		
	system("cls");
	
	N=0;
	printf("   X\n");
	
	printf("	|. \n");
	printf("	| . \n");
	printf("	|   . \n");
	printf("	|     . \n");
	printf("	|       . \n");
	printf("	|         . \n");
	printf("	|           .   A\n");
	printf("       B|             . \n");
	printf("	|               . \n");
	printf("	|                 . \n");
	printf("	|                   .\n");
	printf("	|                     .\n");
	printf("	|                       .\n");
	printf("	|                         .\n");
	printf("	|___________________________ Y\n");	
	
	printf("                C\n");
	
	printf("Qual o âgulo? 1 para X, 2 para Y. \n");

	do 
		{
			som();
			D=getch();
			if (isdigit(D)!=0)
			
			{
				dig[N] = D;
				N++;
				printf ("%c", D);
		
			}
		 
			else if (D==8&&N)	
			
			{
				
				dig[N]='\0';
				N--;
				printf("\b \b");
			}
		
		}		 
				while(D!=13);
			 
			 	dig[N]='\0';
			 	L = atoi(dig);
	
	N=0;
	
	
	if(L<1 || L>3 ){
	
	system("cls");
	
	printf("número inválido!\n");
	getchar();

	}

	if(L==1){
		
	N=0;	
	
	system("cls");
	printf("   X\n");	
	
	printf("	|. \n");
	printf("	| . \n");
	printf("	|   . \n");
	printf("	|     . \n");
	printf("	|       . \n");
	printf("	|         . \n");
	printf("	|           . \n");
   printf("       B|             .  A\n");
	printf("	|               . \n");
	printf("	|                 . \n");
	printf("	|                   .\n");
	printf("	|      X>  Y          .\n");
	printf("	|                       .\n");
	printf("	|                         .\n");
	printf("	|___________________________ Y\n");	
	
	printf("               C\n");
	
	
	printf("X é o cateto oposto a Y, C é o cateto adjacente ao Y. A é a hipotenusa\n");
	getch();	
			
	}

	if(L==2){
		
	N=0;	
	
	system("cls");
		
	printf("   X\n");
	
	printf("	|. \n");
	printf("	| . \n");
	printf("	|   . \n");
	printf("	|     . \n");
	printf("	|       . \n");
	printf("	|         . \n");
	printf("	|           . \n");
	printf("       B|             .  A\n");
	printf("	|               .\n");
	printf("	|                 .\n");
	printf("	|                   .\n");
	printf("	|      X  <Y          .\n");
	printf("	|                       .\n");
	printf("	|                         .\n");
	printf("	|___________________________ Y\n");	
                                              
	printf("              C\n");
	
	
	printf("Y é o cateto oposto ao X, B é o cateto adjacente ao X. A é a hipotenusa.\n");
	getch();	
		
	
		
	}
 	
 	
	
	}//loop do programa inteiro.
	
}

int som(){
		
	Beep(880, 100);	
		
		
		
		
	}
