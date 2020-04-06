#include<stdio.h>

int main(){
    int size, number, sum=0;
    scanf("%d",&size);

    for(int i=0; i < size; i++){
        scanf("%d",&number);
        sum+=number;
    }
    printf("%d\n",sum);
}