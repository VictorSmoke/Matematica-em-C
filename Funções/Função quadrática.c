//bibliotecas
#include <stdio.h>
#include <locale.h>
#include <math.h>
	
	void main(){
		
	setlocale(LC_ALL, "Portuguese");

//declaração de variáveis.

	float a, b, c, resul;
	
	double x1, x2, delta;
	
//coleta de dados necessários.
	
	printf("Faremos um calculo de função quadrática para você. Por favor digite um número à seguir.\r\n");
	
	printf("Digite o A da função:");	
	scanf("%f", &a);
	
	printf("Digite o B da função:");	
	scanf("%f", &b);
	
	printf("Digite o C da função:");	
	scanf("%f", &c);

	
	
//calculos com dados fornecidos.

	delta=b*b - 4*a*c;
	

//estabelecendo condições e exibindo resultados.

	if (a != 0) {
		
	x1= (-b+sqrt(delta))/(2*a);
	x2= (-b-sqrt(delta))/(2*a);
		
		
		
		
	}

if (delta <=0) {
	
	printf("A equação não possui raíes reais.\r\n");
	
	
	
} else {
	
printf("As raizes da equação são essas: %.1f e %.1f.\r\n", x1,x2);	
	
	
	
}

}
