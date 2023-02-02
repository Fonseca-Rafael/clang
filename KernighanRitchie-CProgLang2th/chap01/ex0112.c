#include <stdio.h>

/* count lines, words and characters in input */
main()
{

    int c;

    
    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            putchar('\n');
        } else {
            putchar(c);
        }
    }

}
