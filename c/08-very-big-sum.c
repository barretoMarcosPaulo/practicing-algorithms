#include<stdio.h>

int main(){
    int size;
    long long int number;
    long long int sum = 0;

    scanf("%d",&size);

    for(int i=0; i < size ; i++){
        scanf("%lld",&number);
        sum+=number;
    }

    printf("%lld\n", sum);
    return 0;
}