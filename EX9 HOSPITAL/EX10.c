// O escritório de contabilidade Super Contábil está realizando o reajuste do salário dos funcionários de todos os seus clientes. Para isso, estão utlizando como referencia o reajuste acordado com os sindicatos de cada classe trabalhadora, conforme apresentado na tabela a seguir. Para ajudar o escritório nessa tarefa, faça em C que receba o salário atual, o cargo especificado conforme a tabela e realize o cálcudo do reajuste do salário. Ao término do cálculo o programa deve imprimir o valor do reajuste e o novo salário do funcionário, 

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int cod_cargo, validacao=1;
    float salario, reajuste;

    printf("\nReajuste salarial:\n");
    while(validacao!=0){
        printf("Digite o valor do salario:");
        scanf("%f", &salario);

        printf("\nDigite o codigo do cargo:\n Digite [1] = Auxiliar de escritorio\n Digite [2] = Secretario(a)\n Digite [3] = Cozinheiro(a)\n Digite [4] = Entregador(a)");
        scanf("%d", &cod_cargo);

        if(cod_cargo==1){
            reajuste=salario*0.07;
            salario+=reajuste;
        }else if(cod_cargo==2){
            reajuste=salario*0.09;
            salario+=reajuste;
        }else if(cod_cargo==3){
            reajuste=salario*0.05;
            salario+=reajuste;
        }else if(cod_cargo==4){
            reajuste=salario*0.12;
            salario+=reajuste;
        }

        printf("O valor do reajuste foi de: R$ %.1f \n", reajuste);
        printf("O valor do novo salario e de: R$ %.1f \n", salario);

        printf("\n\nDeseja calcular mais um reajuste? \n [1] - Sim \n [0] - Nao");
        scanf("%d",&validacao);
    }



    return 0;
}
