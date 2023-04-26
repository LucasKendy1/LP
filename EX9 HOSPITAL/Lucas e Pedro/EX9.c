// O hospital local esta fazendo uma campanha para receber doação de sangue. O propenso doador deve inicialmente se cadastrar informando o seu nome completo, sua idade, seu peso, responder a um breve questionario e apresentar um documento odicial com foto.
// Faça um programa,a que permita ao hospital realizar o cadastro dos voluntarios(um numero nao determinado) para avaliar a aptidão quanto à doação de sangue.
// Para estar apto a doar, o voluntario deve ter idade entre 16 e 69, pesar pelo menos 50 kg, estar bem alimentado e nao estar resfriado. O programa deve ler os dados e imprimir para cada voluntario, o nome completo, sua idade, seu peso e se ele esta apto ou nao para doar o e se esta bem alimentado ou nao e, se esta resfriiado ou nao. 

// Nome completo, idade e peso
#include <stdio.h>
main()
{
    char nome[30], info[100];
    int idade, validacao, bem_alimentado, nao_resfriado;
    float peso;
    
    
    printf("Cadastro do usuario.\n");

    while(validacao!=0){
        printf("Digite seu nome: \n");
        scanf("%s",&nome);
        printf("Digite sua idade: \n");
        scanf("%d",&idade);
        printf("Digite seu peso: \n");
        scanf("%f",&peso);
        printf("Digite [1] - Bem alimentado\nDigite [0] - Mal alimentado \n");
        scanf("%d",&bem_alimentado);
        printf("Digite [1] - Saudavel\nDigite [0] - Resfriado \n");
        scanf("%d",&nao_resfriado);

        printf("\n\nNome: %s\n", nome);   
        printf("Idade: %d anos\n", idade);
        printf("Peso: %.2f kg\n", peso);
        if(bem_alimentado==1){
            printf("Alimentacao: Bem alimentado! \n");
        } else{
            printf("Alimentacao: Mal alimentado! \n");
        }
        if(nao_resfriado==1){
            printf("Saude: Saudavel! \n");
        } else{
            printf("Saude: Resfriado! \n");
        }

        if(idade>=16 && idade<=69 && peso>=50 && bem_alimentado==1 && nao_resfriado==1){
            printf("\nVoce esta apto a doar sangue! \n");
        }
        else{
            printf("\nVoce nao esta apto a doar sangue! \n");
            if (idade<16 && idade>69){
                printf("\nVoce nao possui idade para doar sangue\n");
            }
            
            if(peso < 50){
                printf("\nVoce nao possui peso sufiente para doar sangue\n");
            }
            
            if(bem_alimentado==0){
                printf("\nVoce nao esta bem alimentado para doar sangue\n");
            }
            
            if(nao_resfriado==0){
                printf("\nVoce nao esta saudavel para doar sangue\n");
            }
        }
        
        printf("\n\nDeseja cadastrar mais um paciente? \n [1] - Sim \n [0] - Nao");
        scanf("%d\n",&validacao);
    }
    
    return 0;
}
