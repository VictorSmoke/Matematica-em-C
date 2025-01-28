//bibliotecas.
#include <stdio.h>
#include <locale.h>


	int som(){
		
		
	Beep(880, 100);	
	
	}
		
	void main()
	
	{
		setlocale(LC_ALL, "Portuguese");
		
		int n1,n2,n3,n4;
		int Media=0;
		int i=0, N=0, N1=0, N2=0, N3=0;
		char C, C1, C2, C3;
		char dig[50], dig1[50], dig2[50], dig3[50];
	
	while(i<1){
	
	N=0;	
	N1=0;
	N2=0;
	N3=0;
	Media=0;
	
		system("cls");
		
		printf("MÉDIA 1:\n");
		fflush(stdin);
		
			do 
	{
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
		 	n1 = atoi(dig);
	
		system("cls");
		printf("MÉDIA 2:\n");
		fflush(stdin);
		
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
		 	n2 = atoi(dig2);
	
		system("cls");
		printf("MÉDIA 3:\n");
		fflush(stdin);
		
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
		 	n3 = atoi(dig3);
	
		system("cls");
		printf("MÉDIA 4:\n");
		fflush(stdin);
		
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
		 	n4 = atoi(dig1);
	
		system("cls");
		
		Media = ((n1*2)+(n2*2)+(n3*3)+(n4*3))/10;
		printf("Resultado: %d.", Media);
		getch();
		
	}
	
}
	
	
	
	
	
