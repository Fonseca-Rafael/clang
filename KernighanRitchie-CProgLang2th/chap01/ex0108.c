#include <stdio.h>

main()
{
    int c, n1, n2, n3;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    while((c = getchar()) != EOF)
        if(c == '\n')
            ++n1;
        else if(c == ' ')
            ++n2;
        else if(c == '\t')
            ++n3;
    
    printf("Newlines: %d\n", n1);
    printf("Blanks  : %d\n", n2);
    printf("Tabs    : %d\n", n3);
}
