//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>
		
	int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradu��o para portugu�s.
	
	float A1, A2, R;
	int i;

	while(i<1){

	system("cls");

	printf("Informe o valor correspondente ao �ngulo do tri�ngulo semelhante.\n");
	printf(":");
	scanf("%f", &A1);
	system("cls");
	printf("Informe o segundo �ngulo.\n");
	printf(":");
	scanf("%f", &A2);
	system("cls");

	R=A1/A2;

	printf("Raz�o de semelhan�a: %.2f.\n",R);
	printf("Pressione qualquer tecla...\n");
	getch();
	
}
	return 0;
}

int som(){
		
	Beep(880, 100);	
		
		
		
		
	}
