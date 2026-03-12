#include <stdio.h>

void kiirtomb(int tomb[], int meret){
    for(int i = 0; i < meret; i++){
        printf("%d",tomb[i]);

        if(i < meret - 1){
        printf(", ");
        }
    }
    printf("\n");
}

int main(){
    int szamok[]={12, 43, 20, 7, 2};

    int n = sizeof(szamok)/sizeof(szamok[0]);

    kiirtomb(szamok,n);

    return 0;
}