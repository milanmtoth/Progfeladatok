#include <stdio.h>

int main() {
    int r;
    float pi = 3.14;
    int kerulet;
    int terulet;
    printf("Kerem a kor sugarat cm-ben: ");
    scanf("%d",&r);

    kerulet = 2 * r * pi;
    terulet = r * r * pi;

    printf("A kor kerulete: %d cm\n", kerulet);
    printf("A kor terulete: %d cm^2\n", terulet);

    return 0;

}