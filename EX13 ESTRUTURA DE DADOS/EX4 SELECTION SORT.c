#include <stdio.h>

//Explicação do algoritmo textualmente
/*
    *O usuário é solicitado a inserir o tamanho do vetor.
    *Em seguida, o usuário insere os elementos do vetor um por um.
    *O algoritmo de ordenação "selection sort" é aplicado para ordenar o vetor.
    *O algoritmo percorre o vetor do início ao penúltimo elemento.
    *Para cada posição atual no vetor, o algoritmo encontra o elemento mínimo no restante do vetor não ordenado.
    *O elemento mínimo é trocado com o elemento na posição atual, colocando-o em sua posição correta.
    *O algoritmo continua percorrendo o vetor, repetindo os passos 5 e 6 até que todo o vetor esteja ordenado.
    *Em seguida, um loop é utilizado para mostrar o vetor ordenado.

    Algoritmo em pseudocodigo:

    Inicio
        tam_vet <- 0
        aux <- 0
        i <- 0
        j <- 0
        a[15]

        Escreva "Qual o tamanho do vetor?"
        Leia tam_vet

        Para i de 0 até tam_vet - 1 faça
            Escreva "Insira a posicao", i, "do vetor: "
            Leia a[i]
        Fim-para

        Para i de 0 até tam_vet - 2 faça
            aux <- i
            Para j de i+1 até tam_vet - 1 faça
                Se a[j] < a[aux] então
                    aux <- j
                    Se aux != i então
                        temp <- a[aux]
                        a[aux] <- a[i]
                        a[i] <- temp
                    Fim-se
                Fim-se
            Fim-para
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

    // Selection sort
    for(i=0; i<tam_vet-1; i++){
        aux = i;
        for(j= i+1; j<tam_vet; j++){
            if(a[j]<a[aux]){
                aux=j;
                if(aux != i){
                    int temp = a[aux];
                    a[aux] = a[i];
                    a[i] = temp;
                }
            }
            
        }
    }
    
    //Loop para mostrar o vetor ordenado
    for(int i=0; i<tam_vet; i++){
        printf("%d-",a[i]);
    }
    return 0;
}