#include<stdio.h>

int main(){
    char number_string[9][7] = {"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;

    scanf("%d %d", &a,&b);

    for(a; a<=b ; a++){
        if( a>=1 && a<=9)  printf("%s\n",number_string[a-1]);
        
        else{
            if(a%2==0) printf("even\n");
            else printf("odd\n");
        }
    }
}