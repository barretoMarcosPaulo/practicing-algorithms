#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    char s[200];
    char w[400];

    scanf("%c",&ch);
    scanf("%s \n", &s);
    scanf("%[^\n]%*c", &w);

    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",w);

    return 0;
}