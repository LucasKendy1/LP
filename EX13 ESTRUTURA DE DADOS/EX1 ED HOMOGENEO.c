#include <stdio.h>

//-----INTRODUÇÃO A ESTRUTURA DE DADOS HOMOGENEAS-----
//BUSCA DE UM ELEMENTO EM UM VETOR NAO ORDENADO
// DADO UM VETOR A:
                    // [3,4,10,7,6]
//VERIFICAR SE O ELEMENTO 10 SE ENCONTRA NO VETOR A


int main(){
    int a[15];
    int pesquisa=0, tam_vet=0, aux_indice=999, aux=0, inicial=0, final=0, encontrado=0, meio=0, parar_loop=0;

    printf("Insira o tamanho do vetor: \n");
    scanf("%d",&tam_vet);

    for(int i=0; i<tam_vet; i++){
        printf("Alimente a posicao %d do vetor A \n",i);
        scanf("%d",&a[i]);
    }
    
    printf("Insira o elemento que deseja consultar: \n");
    scanf("%d",&pesquisa);

    for(int i=0; i<tam_vet; i++){
        if(a[i]==pesquisa){
            aux_indice=i;
            i=tam_vet+1;
        }
    }
    if(aux_indice!=999){
        printf("Existe o numero %d no vetor no indice %d\n",pesquisa,aux_indice);
    }
    else{
        printf("Nao existe esse elemento no vetor!\n");
    }
    //4 
    //5 j
    //6 i < 6
    //ordenação do vetor
    for (int i=0; i<tam_vet; i++){
        for (int j=0; j<tam_vet; j++){
            if(a[i]<a[j]){
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }
    }
    printf("O vetor ordenado:\n");
    for(int i=0; i<tam_vet; i++){
        printf("%d\n",a[i]); 
    }
    printf("Agora vamos procurar o elemento com busca binaria: \n");
    printf("O elemento a ser pesquisado: %d\n",pesquisa);
    inicial=0;
    final=tam_vet-1;
    encontrado=0;
    do{
        meio=(inicial+final)/2;

        // printf("inicial: %d\n",a[inicial]); 
        // printf("meio: %d\n",a[meio]); 
        // printf("final: %d\n",a[final]); 
        
        if(pesquisa==a[inicial]){
            encontrado=1; 
            printf("O numero %d foi encontrado na posicao %d\n",pesquisa,inicial);
            break;
        }
        if(pesquisa==a[final]){
            encontrado=1; 
            printf("O numero %d foi encontrado na posicao %d\n",pesquisa,final);
            break;
        }
        if(pesquisa==a[meio]){
            encontrado=1;
            printf("O numero %d foi encontrado na posicao %d\n",pesquisa,meio);
            break;
        }
        else if(pesquisa>a[meio]){  //lado direito
            inicial=meio++;
        }       
        else{                       //lado esquerdo
            final=meio--;
        }
        if(inicial==meio || final==meio && encontrado==0){
            parar_loop=1;
        }
    }while(parar_loop==0);
    if(encontrado!=1){
        printf("\nO elemento nao foi encontrado");
    }
    return 0;
}