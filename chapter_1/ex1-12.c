#include <stdio.h>

void main()
{
    int c;

    while( (c = getchar() ) != EOF){
        if  ( c == ' ' || c == '\t' ){ 
            putchar('\n');
            while((c = getchar()) == ' ' || c == '\t')  
                ;
        }
        putchar(c);
    }
}

/* Incase the input buffer begins with a blank space or \t, the first line of the output is a new line. 
 Acceptable minor TRADEOFF for better optimisation. */

 /* To AVOID the above tradeoff use - https://github.com/Elyasin/K-and-R-solutions/blob/master/Exercise%201-12/main.c */