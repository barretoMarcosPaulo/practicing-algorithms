#include<stdio.h>


int main(){
    char numbers[9][7]={"one","two","three","four","five","six","seven","eight","nine"};
    int number_integer;
    scanf("%d", &number_integer);
    if(number_integer <= 9){
        printf("%s\n",numbers[number_integer-1]);
    }else{
        printf("Greater than 9\n");
    }
}