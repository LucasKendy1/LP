#include <stdio.h>
#include <string.h>

main(){
    char str1[8] = "lucas";
    char str2[8] = "clara";

    strncpy(str2,str1,2);
    printf("str2 = %s",str2);

    return 0;
}