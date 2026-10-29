
#include<stdio.h>
#include<string.h>

char line[400];
int a,position = 0;
int main(){
    while ((a = getchar()) != EOF)
    {
        line[position] = a;
        position++;
        if(a == '\n' && position >= 10){
            for(int i = 0;i < position;i++){
                printf("%c",line[i]);
            }
            position = 0;
        }else if(a == '\n'){
            position = 0;
        }
    }
    


    return 0;
}