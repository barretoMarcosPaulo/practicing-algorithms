#include<stdio.h>

int main(){
    char string[1000];
    int index_space = 0;
    
    scanf("%[^\n]**s",string);

    for(int idx = 0 ; string[idx]!='\0' ; idx++){
        
        if(string[idx] == ' '){
            printf("\n");
        }else{
            printf("%c",string[idx]);
        }
    }
    printf("\n");
}