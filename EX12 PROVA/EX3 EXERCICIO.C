#include <stdio.h>
#include <string.h>

int main(){
    int codProduto, codPesquisa, qtdEstoque, valida=1, qtdCliente;
    char descricaoProduto[20],endereco[20], nome[20];
    float precoProduto, freteProduto, precoCliente, precoClienteNFrete;

    do{
        printf("Controle de Abastecimento\n\n");

        //--------------Cadastro de produto da empresa--------------
        printf("Cadastro de produto: \n");
        printf("Digite o codigo do produto: \n");
        scanf("%d",&codProduto);
        printf("Digite a descricao do produto: \n");
        scanf("%s",&descricaoProduto);
        printf("Digite a quantidade em estoque: \n");
        scanf("%d", &qtdEstoque);
        printf("Digite o preco do produto: \n");
        scanf("%f", &precoProduto);
        printf("Digite o frete do produto: \n");
        scanf("%f", &freteProduto);


        //-------------Cadastro e compra do cliente-----------------
        printf("\nQual seu nome? ");
        scanf("%s", &nome);
        printf("Digite o codigo do produto: \n");
        scanf("%d", &codPesquisa);
        if(codProduto==codPesquisa){
            printf("Deseja comprar quantos produtos? \n");
            scanf("%d", &qtdCliente);
            if(qtdCliente>qtdEstoque){
                printf("Nao temos o estoque suficiente! \n");
            }
            else{
                //se tiver quantidade e o produto tem cadastrado, ele finaliza a compra
                
                printf("\nInsira o endereco de entrega: ");
                scanf("%s",endereco);
                qtdEstoque-=qtdCliente;
                precoClienteNFrete=precoProduto*qtdCliente;
                precoCliente=precoProduto*qtdCliente+freteProduto;
                printf("Venda validada: \nNome do cliente: %s\nEndereco de entrega: %s\nProduto: %s\nQuantidade: %d\nFrete: %.2f\nPreco total: %.2f\nPreco sem frete: %f", nome,endereco,descricaoProduto,qtdCliente,freteProduto,precoCliente,precoClienteNFrete);
            }
        }
        else{
            printf("Produto nao encontrado no sistema!\n");
        }
        if(qtdEstoque==0){
            printf("Estoque zerado! Adicione mais produtos\n");
        }
        printf("Deseja fazer outra compra?\n[1] - SIM \n[0] - NAO");
        scanf("%d",&valida);
    }while(valida==1);

    return 0;
}