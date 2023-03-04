#include <stdio.h>
#include<conio.h>
main(){
	float raio;
	printf("Qual o raio? ");
	scanf("%f",&raio);
	float perim = 2*3.14*raio;
	printf("Perimetro = %.1f\n",perim);
	getch();
}
