#include<stdio.h>

int main(){
    int number;
    int sum = 0;

    scanf("%d",&number);

    while(number>=1){
        sum += number%10;
        number = number/10;
    }
    
    printf("%d\n",sum);
    
}