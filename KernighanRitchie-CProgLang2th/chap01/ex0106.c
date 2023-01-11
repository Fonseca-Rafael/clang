#include <stdio.h>

/* copy input to output; 1st version */
main()
{
    int     c;
    char    stat;

    while(stat=((c = getchar()) != EOF)){
        
        /* avoiding showing breaklines */
        if(c != '\n'){
            putchar(c);
            printf(" -- status = %d\n", stat);
        }
    }
    /* ctrl-D only */
    printf(" -- status = %d\n", stat);
}    
