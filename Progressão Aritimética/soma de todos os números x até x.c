//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>
		
	int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradu��o para portugu�s.

	int i, T, N, R, S, T2, T3;
	
//coleta de dados.

	while(i<1){

	system("cls");

	printf("Deseja contar a soma de todos os n�meros de:\r\n");
	scanf("%d", &T);

	system("cls");
	
	printf("Deseja contar a soma de todos os n�meros de:%d at�:\r\n",T);
	scanf("%d", &T2);
	
	system("cls");
	
	printf("Deseja contar a soma de todos os n�meros de:%d at�:%d. \r\n",T,T2);
//calculos.

	T+=T2;
	T3=T2/2;
	R=T*T3;
	
//exibi��o de resultados.

	printf("A soma de todos os n�mero entre os dois termos �:%d.\r\n",R);
	getch();
	
	
	}
	
}
