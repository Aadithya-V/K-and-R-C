#include <stdio.h>

int main() {
    int c, temp;
    
    c = getchar();
    
    while( (temp = getchar()) != EOF ){
        if (c == ' ' && temp == ' ') ;
        else {
            putchar(c);
            c = temp;
        }    
    }
    putchar(c);
    
    return 0;
}