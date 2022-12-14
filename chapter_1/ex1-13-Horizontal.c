#include <stdio.h>

#define MAX_LETTERS 10

void print_histogram(char word[], int n_letters);
void print_vertical_histogram(char word[], int n_letters);


int main( void ){
    int c, n_letters;
    char word[MAX_LETTERS + 1];

    n_letters = 0;

    while ( (c = getchar()) != EOF)
    {
        if( c == ' ' || c == '.' || c == '\n' || c == '\t')
        {
            if( n_letters > 0) 
            {
                word[n_letters] = '\0';
                print_histogram(word, n_letters);
                n_letters = 0;
            }
        }
        else
        {
            word[n_letters++] = c;
        }     
    }
    return 0;
}


void print_histogram(char word[], int n_letters){
    printf("%10s\t:", word);
    while (n_letters > 0)
    {
        printf("\t|");
        n_letters--;
    }

    printf("\n");
}

void print_vertical_histogram(char word[], int n_letters){
    
}