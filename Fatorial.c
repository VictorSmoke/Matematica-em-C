//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>

	int main(void){
	


	setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis.

	
	int F, i=0, E=0;
	long long int F2=1;
	

//coleta de dados.



while(i<1){

	F2=1;
	F=0;
	

	system("cls");
	printf("Digite o n�mero que deseja fatorar:\n");
	scanf("%d", &F);	
	
	E=F;
	
	for( ; F>=1; --F){
		
	F2 *= F;
		
	
		system("cls");
		printf("Fatora��o:%lli. N�mero:%d.\r\n",F2, E);
	
	}

			getch();

	}
	
	return 0;	
}
