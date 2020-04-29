#include<stdio.h>
#include<math.h>

typedef struct{
    int a,b,c;
}TRIANGLE;

int calculate_p(TRIANGLE triangle){
    return (triangle.a+triangle.b+triangle.c)/2;
}
int calculate_s(TRIANGLE triangle){
    double p = calculate_p(triangle);
    double s;

    s = (p*(p-triangle.a) * (p-triangle.b) * (p-triangle.c));
    s = sqrt(s);

    return s;
}

void sorting(TRIANGLE *triangles, int size){
    for(int i = 0; i < size; i++){
        printf("%d\n",calculate_s(triangles[i]));
    }
}

int main(){
    int size;
    scanf("%d",&size);
    TRIANGLE triangles[size];

    for(int i = 0; i < size; i++){
        scanf("%d %d %d",&triangles[i].a,&triangles[i].b,&triangles[i].c);
    }

    sorting(triangles,size);
}