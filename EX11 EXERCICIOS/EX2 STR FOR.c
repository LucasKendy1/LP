#include <stdio.h>

main(){
    char texto[7] = "String";
    printf("Valor da variavel texto = %s\n", texto);
    
    for(int i=0; i<6; i++){
        printf("O valor do elemento %d da string = %c\n",i,texto[i]);
    }

    return 0;
}