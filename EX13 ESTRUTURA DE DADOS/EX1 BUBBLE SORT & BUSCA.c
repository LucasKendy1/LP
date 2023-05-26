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
    return 0;
}