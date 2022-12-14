#include <stdio.h>

int main()
{
    long blanks, tabs, newlines;
    int c;

    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF)
    {
        if( c == ' ') blanks++;
        if(c == '\t' ) tabs++;
        if(c == '\n' ) newlines++;
    }
return 0;
}