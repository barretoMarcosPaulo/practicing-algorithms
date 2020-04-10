#include<stdio.h>

int main(){
    int n, sum=0;

    scanf("%d",&n);
    int array[n];

    for(int i = 0 ; i < n; i++){
        scanf("%d",&array[i]);
        sum+=array[i];
    }

    printf("%d\n",sum);
}