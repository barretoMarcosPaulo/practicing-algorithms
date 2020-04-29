#include<stdio.h>

#define HEIGHT_TUNNEL 41

int is_less(int height_box){
    int less = 0;
    if (height_box < HEIGHT_TUNNEL){
        less = 1;
    }
    return less;
}

int calc_perimeter(int length, int width, int height){
    return (length*width*height);
}

int main(){
    int length, width, height;
    int qtd;
    scanf("%d", &qtd);
    int values_perimeters[qtd];


    for(int i=0;i<qtd;i++){
        scanf("%d %d %d", &length,&width,&height);
        
        if(is_less(height)){
            values_perimeters[i] = calc_perimeter(length,width,height);
        }else{
            values_perimeters[i] = -1;
        }
    }


    for(int i=0;i<qtd;i++){
       
        if(values_perimeters[i]!=-1){
            printf("%d\n",values_perimeters[i]);
        }
    }

}