#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
main()
{
    int len;                /* current line length */
    int max;                /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */

    max = 8;
    while((len = getline(line, MAXLINE)) > 0 ){
        if(len > max){
            printf("out->%s\n", line);
        }
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if(c == '\n')
        s[i++] = c;
    
    s[i] = '\0';
    
    return i;
}
