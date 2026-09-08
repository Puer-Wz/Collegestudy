#include <stdio.h>


int main() {
    int c;
    while((c = getchar()) != EOF){
        if(c == '\n'){
            printf(" this is an Enter\n");
        }else{
            putchar(c);
        }
    }

    
    return 0;
}