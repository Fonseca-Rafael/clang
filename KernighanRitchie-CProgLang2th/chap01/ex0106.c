#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int     c;
    char    stat;

    while((c = getchar()) != EOF){
        putchar(c);
        if(c != '\n'){
            stat = '0' + (c != EOF); 
            putchar('=');
            putchar(stat);
        }
    }
    stat = '0' + (c != EOF); 
    putchar(c);
    putchar('=');
    putchar(stat);
}    
