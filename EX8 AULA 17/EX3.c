#include <stdio.h>

int main(void){
    int x=5, y,z;
    y= ++x + 2;
    z= x-- + 2;
    printf("x= %d, y= %d, z=%d\n",x,y,z);
    return 0;
}