#include <stdio.h>
#include <math.h>

int sortear (){
    int num=0;
    num = rand() % 100 + 1;
    return num; 
}

int main(){
    int pc=0;
    pc = sortear();
    printf ("%d", &pc);
}