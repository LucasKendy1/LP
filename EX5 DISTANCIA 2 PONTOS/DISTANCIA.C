#include <stdio.h>
#include <conio.h>
#include <math.h>
main(){
	float a,b,c,xq,yq,xp,yp;
	printf("Insira o valor de Xq: ");
	scanf("%f",&xq);
	printf("Insira o valor de Yq: ");
	scanf("%f",&yq);
	printf("Insira o valor de Xp: ");
	scanf("%f",&xp);
	printf("Insira o valor de Yp: ");
	scanf("%f",&yp);
	a=xp-xq;
	b=yp-yq;
	c=sqrt(pow(a,2)+pow(b,2));
	printf("\nA distancia entre os dois pontos e: %f",c);
	getch();
}
