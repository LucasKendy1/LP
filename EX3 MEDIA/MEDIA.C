#include <stdio.h>
#include <conio.h>
main(){
	float n1,n2,media;
	printf("Calculo de media de duas notas");
	printf("\n\nInsira a primeira nota");
	scanf("%f",&n1);
	printf("\nInsira a segunda nota");
	scanf("%f",&n2);
	printf("\n\nA media das notas e: %.1f",(n1+n2)/2);
	getch();
}
