#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);

/* print lines without trailing blanks, tabs. Blank lines are ignored */
main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */

    while((len = getline(line, MAXLINE)) > 0 )
        printf("clean string=[%s]\n", line);

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i, tab, b;

    tab   = 0;
    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ){
        if(c != '\t'){
            tab     = 0;
            s[i++]  = c;
        }else{
            if(c == '\t' && tab == 0){
                s[i++]  = ' ';
                tab     = 1;
            }
        }
    }
   
    for(b=i-1; b>0; --b){
        if (s[b] == ' ')
            i = b;
        else
            break;
    }

    /* if(c == '\n')
    //    s[i++] = c; */
    
    s[i] = '\0';

    return i;
}
