//bibliotecas.
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>		
#include <math.h>
#define PI 3,14159265

int main(void){
	
	setlocale(LC_ALL, "Portuguese");//tradu��o para portugu�s.

//declaramndo vari�veis.

	float S, T, C;
	int i, A;
	
//coleta dados.

	while(i<1){

	printf("Informe o �ngulo!\r\n");
	scanf("%d", &A);
	
	system("cls");
	
	C=(A*PI/180);
	S=(A*PI/180.0);
	
	printf("�ngulo:%d Sen:%f. Cos:%lf. Tan:%lf.\r\n", A, sin(S));
	return 0;
	
	}
	
}
