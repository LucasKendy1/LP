#include <stdio.h>

// Explicação do algoritmo textualmente
/*  *   O usuário é solicitado a inserir o tamanho do vetor.
    *   Em seguida, o usuário insere os elementos do vetor um por um.
    *   O vetor é ordenado em ordem crescente usando o algoritmo de ordenação de seleção (bubble sort).
    *   O usuário insere o elemento que deseja procurar no vetor.
    *   O algoritmo de busca binária começa definindo os índices iniciais e finais.
    *   Em um loop do-while, o algoritmo verifica se o elemento de busca é igual ao elemento nos índices inicial, final ou meio. Se sim, o elemento é encontrado e sua posição é exibida.
    *   Caso contrário, o algoritmo verifica se o elemento de busca é maior ou menor do que o elemento no índice do meio. Com base nessa verificação, os índices inicial ou final são atualizados para dividir o espaço de busca ao meio.
    *   O loop continua até que o elemento seja encontrado ou até que os índices inicial e final se tornem adjacentes e o elemento não seja encontrado.
    *   Se o elemento não for encontrado após o loop, uma mensagem informando que o elemento não foi encontrado é exibida.
    * 
    * 
    * 
    Algoritmo em pseudocodigo:

    inicial <- 0
    final <- 0
    encontrado <- 0
    meio <- 0
    pesquisa <- 0
    parar_loop <- 0
    aux <- 0

Inicio

    Escreva "Qual o tamanho do vetor?"
    Leia tam_vet

    Para i de 0 até tam_vet - 1 faça
        Escreva "Insira a posicao", i, "do vetor: "
        Leia a[i]
    Fim-para

    Para i de 0 até tam_vet faça
        Para j de 0 até tam_vet faça
            Se a[i] < a[j] então
                aux <- a[i]
                a[i] <- a[j]
                a[j] <- aux
            Fim-se
        Fim-para
    Fim-para

    Escreva "Insira o elemento de busca"
    Leia pesquisa

    inicial <- 0
    final <- tam_vet - 1
    encontrado <- 0

    Faça
        meio <- (inicial + final) / 2
        
        Se pesquisa = a[inicial] então
            encontrado <- 1
            Escreva "O numero", pesquisa, "foi encontrado na posicao", inicial
            Parar
        Fim-se
        
        Se pesquisa = a[final] então
            encontrado <- 1
            Escreva "O numero", pesquisa, "foi encontrado na posicao", final
            Parar
        Fim-se
        
        Se pesquisa = a[meio] então
            encontrado <- 1
            Escreva "O numero", pesquisa, "foi encontrado na posicao", meio
            Parar
        
        Senão, se pesquisa > a[meio] então
            inicial <- meio + 1
        
        Senão
            final <- meio - 1
        Fim-se
        
        Se (inicial = meio ou final = meio) e encontrado = 0 então
            parar_loop <- 1
        Fim-se

    Enquanto parar_loop = 0

    Se encontrado != 1 então
        Escreva "O elemento nao foi encontrado"
    Fim-se
Fim
*/

int main()
{
    int inicial = 0, final = 0, encontrado = 0, meio = 0, pesquisa = 0, a[15], parar_loop = 0, tam_vet, aux = 0;

    printf("Qual o tamanho do vetor?\n");
    scanf("%d", &tam_vet);

    // Alimentação do vetor
    for (int i = 0; i < tam_vet; i++)
    {
        printf("Insira a posicao %d do vetor: ", i);
        scanf("%d", &a[i]);
    }

    // Vetor precisa estar ordenado crescente para o algoritmo de busca binaria funcionar
    for (int i = 0; i < tam_vet; i++)
    {
        for (int j = 0; j < tam_vet; j++)
        {
            if (a[i] < a[j])
            {
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    // Inserção do elemento de busca
    printf("Insira o elemento de busca\n");
    scanf("%d", &pesquisa);

    // Começo da busca binaria
    inicial = 0;
    final = tam_vet - 1;
    encontrado = 0;
    do
    {
        meio = (inicial + final) / 2;

        if (pesquisa == a[inicial])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, inicial);
            break;
        }
        if (pesquisa == a[final])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, final);
            break;
        }
        if (pesquisa == a[meio])
        {
            encontrado = 1;
            printf("O numero %d foi encontrado na posicao %d\n", pesquisa, meio);
            break;
        }
        else if (pesquisa > a[meio])
        { // lado direito
            inicial = meio++;
        }
        else
        { // lado esquerdo
            final = meio--;
        }
        if (((inicial==meio) || (final==meio) && (encontrado==0)))
        {
            parar_loop = 1;
        }
    } while (parar_loop == 0);
    if (encontrado != 1)
    {
        printf("\nO elemento nao foi encontrado");
    }
    return 0;
}