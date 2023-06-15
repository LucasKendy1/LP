#include<stdio.h>
#include<conio.h>
main()
{
    FILE *fp;
    char ch;
    fp = fopen("hello.txt", "w");
    printf("Insira dados");
    while( (ch = getchar()) != EOF) 
    {
        putc(ch,fp);
    }
    fclose(fp);
    fp = fopen("hello.txt", "r");
    
    while(ch = getc(fp)!= EOF){
       printf("%c",ch); 
    }
    fclose(fp);
    return 0;
}
