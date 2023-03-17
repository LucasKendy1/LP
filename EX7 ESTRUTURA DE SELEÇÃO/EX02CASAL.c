
/* Uma loja de eletrodometicos oferece desconto de 10% de um produto, se o valor do produto for maior que R$500 (quinheiros reais);
Faça um algoritmo que leia o código do produto., descrição do produto, valor do produto. Um cliente realiza a compra de um produto (deve-se ler o código do produto comprado pelo cliente).
Verificar se o prodyuto comprado tem desconto ou não.
Mostrar o código do produto. descrição do produto, valor do produto.
O valor do desconto e o valor a pagar pelo produto.*/

#include<stdio.h>
#include<conio.h>

main(){

float valor, codigo;
char descricao;

printf ("\n Digite o valor, o codigo e a descricao do produto, respectivamente");
scanf ("%f %f %s", &valor, &codigo, &descricao);
if (valor>500){
valor=valor*0.9;
printf ("\n Você ganhou um desconto, o valor a ser pago eh de ", valor);
}else{
printf ("\n Você nao ganhou desconto, o valor a ser pago eh de ", valor);
}
return 0;
}


