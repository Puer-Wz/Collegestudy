#include<stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c,state,b,conti,last_char;//conti means contiuous
    state = OUT;
    last_char = EOF;
    while((c = getchar()) != EOF){
        if(c == ' '||c == '\n'||c == '\t'){
            state = OUT;
        }else{ state = IN; }
        if(state  == IN){
            putchar(c);
        }
            
        else {
            
            if(last_char != ' '&& last_char != '\n'&& last_char != '\t'){ printf("\n");}
            
        }
        last_char = c;

    }

    return 0;
}