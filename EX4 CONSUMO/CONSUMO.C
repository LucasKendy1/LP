#include <stdio.h>
#include <conio.h>

main(){
	float distancia, litros,consumo;
	printf("Insira a distancia em km: \n");
	scanf("%f",&distancia);
	printf("Insira o consumo em litros de combustivel: \n");
	scanf("%f",&litros);
	consumo=litros/distancia;
	printf("O consumo medio do veiculo e: %.1f",consumo," l/km");
	getch();
}
