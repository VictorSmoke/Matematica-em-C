//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradu��o para portugu�s.
	
	int i, OP;
	float M, M2, R, A, A1, A2;
	
	printf("Estimativa sem tabela:1, ou estimativa com tabela de poss�veis resultados:2. ?\n");
	printf(":");
	scanf("%d", &OP);
	
	if(OP==1){
	
	while(i<1){
	
	system("cls");
	
	printf("Informe o primeiro �ngulo!\n");
	printf(":");
	scanf("%f", &A1);
	
	system("cls");
	
	printf("Informe o segundo �ngulo!\n");
	printf(":");
	scanf("%f", &A2);
	
	system("cls");
	
	printf("Informe o �gulo multiplicador");
	printf(":");
	scanf("%f", &M);
	
	R=(A1/A2)*M;
	
	system("cls");
	
	printf("Estimativa: %.2f.\n",R);
	printf("Pressione qualquer tecla...\n");
	getch();
}	

}

	if(OP==2){
	
	while(i<1){
	
	system("cls");
	
	printf("Informe um valor que corresponde a um dos �ngulos!\n");
	printf(":");
	scanf("%f", &A);
	
	system("cls");
	
	printf("Informe o poss�vel multiplicador!\n");
	printf(":");
	scanf("%f", &M2);
	
	R=A*M2;
	
	system("cls");
	
	printf("Estimativa: %.2f.\n",R);
	printf("Pressione qualquer tecla...\n");
	getch();
	
}	

}

	return 0;
	
}

int som(){
		
	Beep(880, 100);	
		
		
		
		
	}
