//bibliotecas
#include <stdio.h>
#include <locale.h>
#include <math.h>
	
	void main(){
		
	setlocale(LC_ALL, "Portuguese");

//declara��o de vari�veis.

	float a, b, c, resul;
	
	double x1, x2, delta;
	
//coleta de dados necess�rios.
	
	printf("Faremos um calculo de fun��o quadr�tica para voc�. Por favor digite um n�mero � seguir.\r\n");
	
	printf("Digite o A da fun��o:");	
	scanf("%f", &a);
	
	printf("Digite o B da fun��o:");	
	scanf("%f", &b);
	
	printf("Digite o C da fun��o:");	
	scanf("%f", &c);

	
	
//calculos com dados fornecidos.

	delta=b*b - 4*a*c;
	

//estabelecendo condi��es e exibindo resultados.

	if (a != 0) {
		
	x1= (-b+sqrt(delta))/(2*a);
	x2= (-b-sqrt(delta))/(2*a);
		
		
		
		
	}

if (delta <=0) {
	
	printf("A equa��o n�o possui ra�es reais.\r\n");
	
	
	
} else {
	
printf("As raizes da equa��o s�o essas: %.1f e %.1f.\r\n", x1,x2);	
	
	
	
}

}
