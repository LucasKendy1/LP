// 5.- Em um frigorífico existem 90 bois. Cada boi traz preso em seu pescoço um cartão contendo seu número
// de identificação e seu peso. Faça um programa em C que imprima a identificação e o peso do boi mais
// gordo e do boi mais magro (supondo que não haja empates).

#include <stdio.h>

main()
{
    int id = 0, idgordo = 0, idmagro = 0;
    float peso = 0, gordo = 0, magro = 0;

    for (int i = 0; i < 90; i++)
    { 
        printf("Insira a identificacao do boi: \n");
        scanf("%d", &id);
        printf("Insira o peso do boi: \n");
        scanf("%f", &peso);
        if (gordo == 0)
        {
            gordo = peso;
            idgordo = id;
        }
        if (magro == 0)
        {
            magro = peso;
            idmagro = id;
        }
        if (peso > gordo)
        {
            gordo = peso;
            idgordo = id;
        }
        if (peso < magro)
        {
            magro = peso;
            idmagro = id;
        }
    }
    printf("\n\nO boi mais gordo e o de numero %d, e tem %.1f Kg\n", idgordo, gordo);
    printf("O boi mais magro e o de numero %d, e tem %.1f Kg", idmagro, magro);
    return 0;
}