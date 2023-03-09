#include <stdio.h>
//Dada uma temperatura em graus Fahrenheit (ºF), informe a correspondente em graus Celcius (ºC). Dica: C=(F-32)*(5/9)

main(){
    float fire,celso;
    printf("Digite a temperatura em graus Fahrenheit: \n");
    scanf("%f",&fire);
    celso=(fire-32)*(0.5555555555555556);
    printf("O valor de Fahrenheit: %.1f em Celcius e de: %.1f",fire, celso);
    return 0;
}