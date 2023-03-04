#include<stdio.h>
#include<math.h>
#include<conio.h>

#define LIMITE 30		//constante limite=30
main(){
	float peso,altura,imc;
	//clrscr();
	printf("\n\n");
	printf("\n Qual o seu peso em kilos? ");
	scanf("%f",&peso);
	printf("\n Qual sua altura em metros?" );
	scanf("%f",&altura);
	imc=peso/pow(altura,2);
	printf("\n\n");
	printf("\Seu IMC e %.1f",imc);
	
	if(imc<=LIMITE){
		printf(", Bora comer um hamburger");
	}
	else{
		printf(", A smartfit estah com promocao, aproveite");
		getch(); //system ("pause")
	}
}
