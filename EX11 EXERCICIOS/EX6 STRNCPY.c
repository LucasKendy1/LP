#include <stdio.h>
#include <string.h>

main(){
    char str1[8] = "asdfghjkl";
    char str2[8];

    strncpy(str2,str1,7);

    str2[8] = '\0';
    printf("str2 = %s",str2);

    return 0;
}