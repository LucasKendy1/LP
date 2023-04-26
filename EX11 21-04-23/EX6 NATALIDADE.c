// 6.- Dado um país A, com 5 milhões de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com
// 7 milhões de habitantes e uma taxa de natalidade de 2% ao ano, fazer um programa em C que calcule e
// imprima o tempo necessário para que a população do país A ultrapasse a população do país B

#include <stdio.h>

main()
{
    int anos = 0;
    float a = 5000000, b = 7000000, aux = 0;
    while (a < b)
    {
        aux = a * 0.03;
        a += aux;
        aux = b * 0.02;
        b += aux;
        anos += 1;
    }
    printf("\n\nPopulacao do pais A: %.1f\n", a);
    printf("Populacao do pais B: %.1f\n", b);
    printf("Tempo necessario: %d anos", anos);
}