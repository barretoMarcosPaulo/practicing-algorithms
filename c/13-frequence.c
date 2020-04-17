#include<stdio.h>
#include<stdlib.h>

int replace(char *string,char c, int index){
    int count = 0;
    for(int i = index+1 ; string[i]!='\0';i++){
        if(c==string[i]){
            count++;
            string[i]='-';
        }
    }
    return count;
}

int main(){
    char input[255];
    char *f = (char *)malloc(2 * sizeof(char));

    scanf("%s",input);


    for(int i = 0 ; input[i]!='\0';i++){
        int res = replace(input,input[i],i);
        if(input[i]!='-')
            printf("%c = %d\n",input[i],res);
    }
    printf("\n");

}