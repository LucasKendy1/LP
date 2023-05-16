#include <stdio.h>

//os numeros pares só seram printados se for divisivel por 4
//o codigo original nao possui chaves dos ifs

int main(){
    
    int n;
    scanf("%d",&n);
    if(n%2==0){
        if(n%4==0){
            printf("O numero é par e divisivel por 4\n");
        }
    }
    else{
        printf("O numero é impar\n");
    }
    return 0;
}