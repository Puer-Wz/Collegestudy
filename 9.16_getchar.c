#include <stdio.h>


int main() {
    int c,b;
    while((c = getchar()) != EOF){
        if(c == ' '){
            while(1){
                b = getchar();
                if(b == ' '){
                    continue;
                }else{
                    printf(" %c",b);
                    break;
                }       
            }
                
        }else putchar(c);
    }

    return 0;
}


//this is to test if getchar() really eaten an character

/*int main(){
    int c,b;
    for(int i = 1;i <= 3;i++){
        c = getchar();
        b = getchar();
        printf("c = ");
        putchar(c);
        printf( "\nb = ");
        putchar(b);
        
    }

    return 0;
}*/