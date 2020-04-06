#include <stdio.h>

int max_of_four(int n1, int n2, int n3, int n4){
    int array[] = {n1,n2,n3,n4};
    int aux = 0;

    for(int i = 0 ; i < 4; i++){
        for(int j = 0 ; j < 4; j++){
            if(array[i] < array[j]){
                aux=array[i];
                array[i] = array[j];
                array[j] = aux;

            }
        }
    }

    return array[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d\n", ans);
    
    return 0;
}