#include <stdio.h>

#define IN  1    /* inside a word */
#define OUT 0   /* outside a word */
#define MAX_WORD_SIZE 10

/* histogram of word lenghts - all words greater or equal MAX_WORD_SIZE are grouped*/
int main()
{
    int c, nc, state;
    int freq[MAX_WORD_SIZE];
    int idx, aux, max_count;

    state = OUT;
    nc = 0;

    /* initialize frequency array */
    for(idx=0; idx<MAX_WORD_SIZE; ++idx)
        freq[idx] = 0;

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            /* leaving a word but not a special characters*/
            if(nc > 0){
                idx = (nc > MAX_WORD_SIZE) ? MAX_WORD_SIZE-1 : nc % MAX_WORD_SIZE;
                freq[idx]++;
                nc = 0;
            }
        
        }else if (state == OUT){
            state = IN;
        }else{
            /* counts only characters inside the word */
            ++nc;
        }
    }
    
    /* check for last word presence */
    if(nc > 0){
        idx = (nc > MAX_WORD_SIZE) ? MAX_WORD_SIZE-1 : nc % MAX_WORD_SIZE;
        freq[idx]++;
    }

    printf("\n==============[ word size ]=================\n");
    for(idx=0; idx<MAX_WORD_SIZE; ++idx){
            printf("%3d:",idx+1);
            for(aux=0; aux<freq[idx]; ++aux) printf("*");
            printf("\n");
    }
    
    printf("\n==============[ word size ]=================\n");
    /* max freq value */
    max_count = 0;
    for(idx=0; idx<MAX_WORD_SIZE; ++idx)
        if(max_count < freq[idx]) max_count = freq[idx];
   
    /* header */
    for(idx=0; idx<MAX_WORD_SIZE; ++idx){
            printf("%3d\t",idx+1);
    }
    printf("\n");
    /* histogram */
    for(aux=0; aux<max_count; aux++){
        for(idx=0; idx<MAX_WORD_SIZE; ++idx){
            if(freq[idx] > 0 && aux < freq[idx]) 
                printf("%3s\t", "*");
            else
                printf("%3s\t", " ");
        }
        printf("\n");
    }
}

