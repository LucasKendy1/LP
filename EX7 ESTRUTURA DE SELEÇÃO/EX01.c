#include <stdio.h>
#include <conio.h>
main(){
    int a,b;
    printf("Entre com o valor de A e B: \n");
    scanf("%d %d", &a, &b);
    if(b>a){
        printf("O maior valor e: %d",b);
    }
    else{
        printf("O maior valor e: %d",a);
    }
    getch();
}