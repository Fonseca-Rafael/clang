#include <stdio.h>

main()
{
    int c, b;
    b = 0;
    while((c = getchar()) != EOF){
        
        if(c != ' ' || b == 0)
            putchar(c);
        
        if(c == ' ')
            b = 1;
        else 
            b = 0;
    } 
}
