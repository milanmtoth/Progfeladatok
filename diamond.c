#include <stdio.h>
int main(){
    int m;
    printf("Kérek egy magassagot: ");
    scanf("%d",&m);

   if ( m <=0 || m % 2 == 0) {
    printf("Hiba! Pozitiv paratlan szamot kerek: ");
    return 1;
}
int d = m / 2;

    for (int i = 0; i <= d; i++) {
        for (int y = 0; y < d - i; y++) {
            printf(" ");
        }
        for (int y = 0; y < 2 * i + 1; y++) {
            printf("*");
        }
        printf("\n");
    } 

    for (int i = d - 1; i >= 0; i--) {
        for (int y = 0; y < d - i; y++) { 
            printf(" ");
        }
        for (int y = 0; y < 2 * i + 1; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}