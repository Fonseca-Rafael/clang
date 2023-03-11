#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getline(char line[], int maxline);
void reverse(char to[], char from[], int len);

/* print reversed input line */
main()
{
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */
    char reversed[MAXLINE]; /* reversed line saved here */

    while((len = getline(line, MAXLINE)) > 0 ){
        reverse(reversed, line, len);
        printf("reversed: %s\n", reversed);
    }

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to' in reverse order; assume to is big enough */
void reverse(char to[], char from[], int len)
{
    int i;

    i = 0;
    to[len] = '\0';
    while((to[len-1] = from[i]) != '\0'){
        ++i;
        len--;
    }
}
