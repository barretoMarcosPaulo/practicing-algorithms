#include<stdio.h>

int main(){
    int n_alice[3],n_bob[3];
    int p_alice=0, p_bob=0;

    scanf("%d %d %d", &n_alice[0],&n_alice[1],&n_alice[2]);
    scanf("%d %d %d", &n_bob[0],&n_bob[1],&n_bob[2]);

    for(int i = 0; i < 3; i++){
        if(n_alice[i] > n_bob[i]){
            p_alice++;
        }
        if(n_bob[i] > n_alice[i]){
            p_bob++;
        }
    }
    printf("%d %d\n",p_alice, p_bob);
}