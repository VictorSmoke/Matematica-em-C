//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>
		
	int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradução para português.
	
	float A1, A2, R;
	int i;

	while(i<1){

	system("cls");

	printf("Informe o valor correspondente ao ângulo do triângulo semelhante.\n");
	printf(":");
	scanf("%f", &A1);
	system("cls");
	printf("Informe o segundo ângulo.\n");
	printf(":");
	scanf("%f", &A2);
	system("cls");

	R=A1/A2;

	printf("Razão de semelhança: %.2f.\n",R);
	printf("Pressione qualquer tecla...\n");
	getch();
	
}
	return 0;
}

int som(){
		
	Beep(880, 100);	
		
		
		
		
	}
