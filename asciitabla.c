#include <stdio.h>

int main () {
    int osszeg = 0;

    printf("ASCII tabla tartomanya 32-tol 126-ig:\n");
    for (int i=32;i<=126;i++) {
        printf("%d: %c\n", i, i);
    }
    for ( char c = 'A'; c <= 'Z';c++) {
        osszeg += c;
    }
    printf("Az angol nagybetuk ASCII ertekeinek osszege: %d\n", osszeg);

    return 0;
}