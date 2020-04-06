#include<stdio.h>

int main(){
    int number_int_1, number_int_2;
    float number_float_1, number_float_2;

    scanf("%d %d", &number_int_1, &number_int_2);
    scanf("%f %f", &number_float_1, &number_float_2);

    printf("%d ", (number_int_1 + number_int_2));
    printf("%d \n", (number_int_1 - number_int_2));

    printf("%0.1f ", (number_float_1 + number_float_2));
    printf("%0.1f \n", (number_float_1 - number_float_2));
}