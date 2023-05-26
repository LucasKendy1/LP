#include <stdio.h>

//Explicação do algoritmo textualmente
/*  *O usuário é solicitado a inserir o tamanho do vetor.
    *Em seguida, o usuário insere os elementos do vetor um por um.
    *O algoritmo de ordenação "insertion sort" é aplicado para ordenar o vetor.
    *Para cada elemento a partir do segundo (índice 1), o algoritmo armazena o elemento em uma variável  auxiliar.
    *O algoritmo compara o elemento auxiliar com os elementos anteriores no vetor. Ele desloca os elementos maiores para a direita até encontrar a posição correta para inserir o elemento auxiliar.
    *Após encontrar a posição correta, o elemento auxiliar é inserido no vetor.
    *O algoritmo continua percorrendo o vetor, repetindo os passos 4 a 6 até que todos os elementos estejam em suas posições corretas.
    *Em seguida, um loop é utilizado para mostrar o vetor ordenado.

    Algoritmo em pseudocodigo:

    tam_vet <- 0
    aux <- 0
    i <- 0
    j <- 0
    a[15]

    Inicio
        Escreva "Qual o tamanho do vetor?"
        Leia tam_vet

        Para i de 0 até tam_vet - 1 faça
            Escreva "Insira a posicao", i, "do vetor: "
            Leia a[i]
        Fim-para

        Para i de 1 até tam_vet - 1 faça
            aux <- a[i]
            j <- i - 1
            Enquanto j >= 0 e a[j] > aux faça
                a[j+1] <- a[j]
                j <- j - 1
            a[j+1] <- aux
        Fim-para

        Para i de 0 até tam_vet - 1 faça
            Escreva a[i], "-"
        Fim-para
    Fim
*/
int main()
{
    int a[15], tam_vet, aux=0, i=0, j=0;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tam_vet);

    // Alimentação do vetor
    for (int i = 0; i < tam_vet; i++)
    {
        printf("Insira a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    for(i=1; i<tam_vet; i++){
        aux = a[i];
        j = i-1;
        while(j >= 0 && a[j] > aux){
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = aux;
    }
    
    //Loop para mostrar o vetor ordenado
    for(int i=0; i<tam_vet; i++){
        printf("%d-",a[i]);
    }
    return 0;
}