#include <stdio.h>

void abc(char tomb[],int meret){
    for(int i = 0; i < meret; i++){
        tomb[i]= 'a'+ i;
    }
}

int main(){
    char abece[26];

    abc(abece,26);

    printf("Az angol abc kisebetui: \n");

    for(int i = 0; i < 26;i++){
        printf("%c",abece[i]);
    }
    printf("\n");

    return 0;
}