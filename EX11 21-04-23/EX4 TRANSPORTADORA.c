// 4- Uma transportadora utiliza caminhões que suportam até 10 toneladas de peso, as caixas transportadas
// têm tamanho fixo e o caminhão comporta no máximo 200 caixas, assim, esta transportadora precisa
// controlar a quantidade e o peso das caixas para acomodar nos caminhões.

// Faça um programa em C que
// leia n caixas e seu peso, ao final, o programa deve imprimir a quantidade de caixas, o peso total dos
// caixas e o peso médio dos caixas

main()
{
    float media = 0, peso = 0, pesoTotal = 0;
    int caixas = 0, continua = 0;

    do
    {
        printf("Insira o peso da caixa: \n");
        scanf("%f", &peso);
        if (peso + pesoTotal <= 10000)
        {
            if (caixas <= 200)
            {
                pesoTotal += peso;
                caixas += 1;
            }
            else
            {
                printf("O caminhao ja esta lotado!\n");
                continua = 0;
            }
        }
        else
        {
            printf("O caminhao ja esta lotado!\n");
            continua = 0;
        }

        printf("\n\nDeseja continuar inserindo caixas? \n[1]-SIM\n[0]-NAO");
        scanf("%d", &continua);
    } while (continua == 1);

    media = pesoTotal / caixas;

    printf("\n\nO caminhao ira levar %d caixas\n", caixas);
    printf("O peso medio das caixas e de: %.2f\n", media);
    printf("O peso total das caixas e de: %.2f\n", pesoTotal);
    return 0;
}
